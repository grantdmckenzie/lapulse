  var _map = L.map('map').setView([33.968064, -118.171692], 11);
  L.tileLayer('http://{s}.tile.cloudmade.com/d1abd7c11778439c95f45e03924ab211/87782/256/{z}/{x}/{y}.png', {
      maxZoom: 18,
  }).addTo(_map);
    
  _map._initPathRoot();
  var svg = d3.select("#map").select("svg"),
	g = svg.append("g");
  
  _LAPULSE = {};
  _LAPULSE.map = {};
  _LAPULSE.twitter = {};
  _LAPULSE.twitter.layer = [];
  _LAPULSE.timer = null;
  _LAPULSE.serverURL = 'http://localhost'; // 'http://stko-poi.geog.ucsb.edu';
  
  $(function() {
  _LAPULSE.checkRegion();
  });
  // _map.on('moveend', function(e) {_LAPULSE.checkRegion();});
  //_map.on('resize', function(e) {_LAPULSE.checkRegion(e);});
  // _map.on('zoomend', function(e) {_LAPULSE.checkRegion(e);});
  
  _LAPULSE.checkRegion = function() {
    _LAPULSE.map.bounds = _map.getBounds();
    _LAPULSE.map.zoom = _map.getZoom();
   // if (_map.getZoom() > 11 && _map.getZoom < 12) {
	// _LAPULSE.getPointsFromBbox(_map.getBounds());
   // }
    if (_map.getZoom() > 10) {
	_LAPULSE.localContentOff();
	_LAPULSE.localContentOn();
    } else {
	_LAPULSE.localContentOff();
    }
  };	
  
  _LAPULSE.localContentOn = function() {
      _LAPULSE.timer = setInterval(function(){
	_LAPULSE.twitter.getContent();
      },700);
  }
  _LAPULSE.localContentOff = function() {
      clearInterval(_LAPULSE.timer);
      _LAPULSE.timer = null;
  }
  _LAPULSE.twitter.getContent = function() {
      var params = {'bbox':_LAPULSE.map.bounds.getSouthWest().lng + "," + _LAPULSE.map.bounds.getSouthWest().lat + "," + _LAPULSE.map.bounds.getNorthEast().lng + "," + _LAPULSE.map.bounds.getNorthEast().lat};
      
      $.ajax({
	  url: _LAPULSE.serverURL + "/lapulse/handlers/getTweetsFromBbox.php",
	  type: "GET",
	  data: params,
	  dataType: 'json',
	  success: function(data){
	      // _LAPULSE.twitter.data = data;
	      _LAPULSE.twitter.drawPoints(data);
	  },
	  error: function(a,b,c) {
	      console.log(b);
	  }
      });
  }
  
  _LAPULSE.twitter.drawPoints = function(data) {
    
	data.forEach(function(d) {
	  d.LatLng = new L.LatLng(d.lat,d.lng)
	});
      _LAPULSE.twitter.layer.push();
      _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1] = g.selectAll("circle")
	  .data(data)
	  .enter().append("circle")
	    .attr("r", "10")
	    .attr('fill','red');
	    // .attr('fillOpacity','0.0');
  
	function update() {
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].attr("cx",function(d) { return _map.latLngToLayerPoint(d.LatLng).x})
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].attr("cy",function(d) { return _map.latLngToLayerPoint(d.LatLng).y})
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].attr("r", "8")
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].transition().duration(2000).attr('r',0.0).style('opacity',0.0).remove();
	}
	// _map.on("viewreset", update);
	update();
  }
  
  _LAPULSE.getPointsFromBbox = function(bounds) {
      var params = {'bbox':bounds.getSouthWest().lng + "," + bounds.getSouthWest().lat + "," + bounds.getNorthEast().lng + "," + bounds.getNorthEast().lat};
      
      $.ajax({
	  url: _LAPULSE.serverURL + "/lapulse/handlers/getPointsFromBbox.php",
	  type: "GET",
	  data: params,
	  dataType: 'json',
	  success: function(data){
	      _LAPULSE.data = data;
	      var l = new Array();
	      for(var d in data) {
		  // _LAPULSE.data[d].layer = 
		  for(var x in _base) {
		      if(_base[x].id == data[d].basecat)
			 var color = "#"+_base[x].color;
		  }
		  L.circle([data[d].lat, data[d].lng], 50, {
			color: 'red',
			stroke: false,
			fillColor: color,
			fillOpacity: data[d].s1
+ 0.1
		  }).addTo(_map);
		  //l.push(L.circle([data[d].lat, data[d].lng], data[d].s1));
	      }
	      /*_LAPULSE.layerGroup = L.layerGroup(l);
	      _LAPULSE.layerGroup.addTo(_map); */
	  },
	  error: function(a,b,c) {
	      console.log(b);
	  }
      });
  }