  var _map = L.map('map').setView([33.968064, -118.171692], 11);
  L.tileLayer('http://{s}.tile.cloudmade.com/d1abd7c11778439c95f45e03924ab211/115014/256/{z}/{x}/{y}.png', {
      maxZoom: 18,
  }).addTo(_map);
    
  
  _LAPULSE = {};
  _LAPULSE.map = {};
  _LAPULSE.twitter = {};
  _LAPULSE.twitter.layer = [];
  _LAPULSE.timer = null;
  _LAPULSE.serverURL = 'http://localhost'; // 'http://stko-poi.geog.ucsb.edu';
  
  $(function() {
  _LAPULSE.checkRegion();
  });
  _map.on('moveend', function(e) {_LAPULSE.checkRegion();});
  //_map.on('resize', function(e) {_LAPULSE.checkRegion(e);});
  // _map.on('zoomend', function(e) {_LAPULSE.checkRegion(e);});
  
  _LAPULSE.checkRegion = function() {
    _LAPULSE.map.bounds = _map.getBounds();
    _LAPULSE.map.zoom = _map.getZoom();
    if(_map.getZoom() > 13)
	_LAPULSE.getPointsFromBbox(_map.getBounds());

  };	


  
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
		  L.circle([data[d].lat, data[d].lng], 20, {
			color: 'red',
			stroke: false,
			fillColor: color,
			fillOpacity: data[d].s1 * 2
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