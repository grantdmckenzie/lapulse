var tooltip = d3.select("body")
	.append("div")
	.attr("class","tooltip")
	.text("a simple tooltip");

L.TileLayer.d3_topoJSON =  L.TileLayer.extend({
    onAdd : function(map) {
        L.TileLayer.prototype.onAdd.call(this,map);
        this._path = d3.geo.path().pointRadius(4).projection(function(d) {
            var point = map.latLngToLayerPoint(new L.LatLng(d[1],d[0]));
            return [point.x,point.y];
        });
        this.on("tileunload",function(d) {
            if (d.tile.xhr) d.tile.xhr.abort();
            if (d.tile.nodes) d.tile.nodes.remove();
            d.tile.nodes = null;
            d.tile.xhr = null;
        });
    },
    _loadTile : function(tile,tilePoint) {
        var self = this;
        this._adjustTilePoint(tilePoint);

        if (!tile.nodes && !tile.xhr) {
            tile.xhr = d3.json(this.getTileUrl(tilePoint),function(error, tjData) {
                if (error) {
                    console.log(error);
                } else {
                    var geoJson = topojson.feature(tjData, tjData.objects[self.options.layerName]);
                    tile.xhr = null;
                    tile.nodes = d3.select(_LAPULSE.map._container).select("svg").append("g");
                    tile.nodes.selectAll("path")
                        .data(geoJson.features).enter()
                      .append("path")
                        .attr("d", function(d) { return self._path(d); })
                        .style("fill", function(d) {
			  for(var k in _LAPULSE.base) {
			    if(_LAPULSE.base[k].id == d.properties.basecat)
			       return "#"+_LAPULSE.base[k].color;
			  }
                        })
                        .style("fill-opacity", function(d) { 
			  return (parseFloat(d.properties.s1)+0.005)*20;
			})
			.on("mouseover", function(){
			    return tooltip.style("visibility", "visible");})
			.on("mousemove", function(d){
			    $('.tooltip').html("<b>Venue:</b> "+d.properties.name + "<br/><b>FS Category: </b>" + d.properties.catname + "<br/><b>Temporal Probability: </b>" + d.properties.s1  );
			    return tooltip.style("top", (event.pageY-10)+"px").style("left",(event.pageX+10)+"px");})
			.on("mouseout", function(){
			    return tooltip.style("visibility", "hidden");});
                        //.append("svg:title")
                        //.text(function(d) {return d.properties.catname; });
                }
            });
        }
    }
});