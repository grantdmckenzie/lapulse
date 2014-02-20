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
                    tile.nodes = d3.select(map._container).select("svg").append("g");
                    tile.nodes.selectAll("path")
                        .data(geoJson.features).enter()
                      .append("path")
                        .attr("d", function(d) { return self._path(d); })
                        .style("fill", function(d) {
			  return colors[d.properties.basecat];
                        })
                        .style("fill-opacity", function(d) { 
			  return (parseFloat(d.properties.s1)+0.005)*20;
			})
                        .append("svg:title")
                        .text(function(d) {return d.properties.catname; });
                }
            });
        }
    }
});