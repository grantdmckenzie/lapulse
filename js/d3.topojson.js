var tooltip = d3.select("body")
	.append("div")
	.attr("class","tooltip")
	.text("a simple tooltip");

L.TileLayer.d3_topoJSON =  L.TileLayer.extend({
    onAdd : function(map) {
        L.TileLayer.prototype.onAdd.call(this,map);
        this._path = d3.geo.path().pointRadius(5).projection(function(d) {
            var point = map.latLngToLayerPoint(new L.LatLng(d[1],d[0]));
            return point.y+"";
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
                    tile.nodes.selectAll("circle")
                        .data(geoJson.features).enter()
                      .append("circle")
                        .attr("cy", function(d) { 
			    return _LAPULSE.map.latLngToLayerPoint(new L.LatLng(d.geometry.coordinates[1],d.geometry.coordinates[0])).y;
			    //return point.y;
			})
			.attr("cx", function(d) { 
			    return _LAPULSE.map.latLngToLayerPoint(new L.LatLng(d.geometry.coordinates[1],d.geometry.coordinates[0])).x;
			    //return point.x; 
			})
			.attr("r", "7")
			.attr("osid", function(d) { return d.properties.osid; })
                        .style("fill", function(d) {
			  for(var k in _LAPULSE.base) {
			    if(_LAPULSE.base[k].id == d.properties.osid)
			       return "#"+_LAPULSE.base[k].color;
			  }
                        })
			.style("visibility", function(d) {
			    for(var k in _LAPULSE.base) {
				if(_LAPULSE.base[k].id == d.properties.osid) {
				    if(_LAPULSE.base[k].legend)
					return "visible";
				    else
					return "hidden";
				}
				    
			    }
			})
                        .style("fill-opacity", function(d) { 
			  var x = "s"+_LAPULSE.time.hour;
			  return parseInt(d.properties[x])/200;
			})
			.on("mouseover", function(d){
			    setDonutData(d);
			    $('.tooltip').html("<b>Category: </b>" + d.properties.catname);
			    tooltip.style("visibility", "visible");
			    tooltip.style("top", (event.pageY-15)+"px").style("left",(event.pageX+60)+"px");
			   
			    return donut.style("visibility", "visible");})
			.on("mousemove", function(d){
			    
			  var p = _LAPULSE.map.latLngToLayerPoint(new L.LatLng(d.geometry.coordinates[1],d.geometry.coordinates[0]));
			  
			  return donut.attr("transform", "translate("+p.x+","+p.y+")");})
			  // return vis.style("top", (event.pageY-10)+"px").style("left",(event.pageX+10)+"px");})
			.on("mouseout", function(){
			    tooltip.style("visibility", "hidden");
			    return donut.remove();})
		    
		  _LAPULSE.VectorMarkerSize();
                }
            });
	   
        } 
    }
});

