     $(function() {
	start = new Date().getTime();
	scale = 16;
        _LAPULSE.map = L.map('map').setView([33.968064, -118.171692], scale);
	_LAPULSE.map._initPathRoot();

	// Add a fake GeoJSON line to coerce Leaflet into creating the <svg> tag that d3_geoJson needs
	new L.geoJson({"type": "LineString","coordinates":[[0,0],[0,0]]}).addTo(_LAPULSE.map);
	
	// Base Map
	L.tileLayer('http://{s}.tile.cloudmade.com/d1abd7c11778439c95f45e03924ab211/115014/256/{z}/{x}/{y}.png', {maxZoom: 18,}).addTo(_LAPULSE.map);
	
	_LAPULSE.constructBase();
	loadLayers("vector");
	
      });
	var start = null;
	var end = null;
	var count = 0;
	var scale = 12;
	var tileBounds = L.latLngBounds(L.latLng(33.5846214294434, -118.838417053223), L.latLng(34.3280487060547, -117.515472412109));
	var _LAPULSE = {};
        _LAPULSE.constructBase = function() {
	this.getLayers = function() {
	    for(var i=1; i<2;i++) {
		for(var key in this.base) {
		    
		    // Raster Tiles
		    this.layers[2][key+'_'+i] = new L.TileLayer("http://localhost/tilestache/"+this.base[key].id+"_"+i+"/{z}/{x}/{y}.png", {bounds:tileBounds, unloadInvisibleTiles: true});
		}
		// Vector Tiles
		this.layers[3][i] = new L.TileLayer.d3_topoJSON("http://localhost/tilestache/vectiles_"+i+"/{z}/{x}/{y}.topojson", {layerName: "vectile",unloadInvisibleTiles: true,});
	    }
	}    
	this.base = {};
	this.layers = [];
	this.layers[1] = {};
	this.layers[2] = {};
	this.layers[3] = [];

	this.base.residence = {color:'a65628',layer:{},name:'Residence', id: '4e67e38e036454776db1fb3a', legend:true};
	this.base.college = {color:'377eb8',layer:{}, name: 'College & University', id: '4d4b7105d754a06372d81259', legend:true};
	this.base.arts = {color:'e41a1c',layer:{},name:'Arts & Entertainment', id: '4d4b7104d754a06370d81259', legend:true};
	this.base.nightlife = {color:'984ea3',layer:{},name:'Nightlife Spot', id: '4d4b7105d754a06376d81259', legend:true};
	this.base.food = {color:'4daf4a',layer:{},name:'Food', id: '4d4b7105d754a06374d81259', legend:true};
	// this.base.event = {color:'ff3',layer:{}};
	this.base.outdoor = {color:'ff7f00',layer:{},name:'Outdoors & Recreation', id: '4d4b7105d754a06377d81259', legend:true};
	this.base.professional = {color:'ffff33',layer:{},name:'Professional & Other Places', id: '4d4b7105d754a06375d81259', legend:true};
	this.base.shop = {color:'f781bf',layer:{},name:'Shop & Service', id: '4d4b7105d754a06378d81259', legend:true};
	this.base.travel = {color:'999999',layer:{},name:'Travel & Transport', id: '4d4b7105d754a06379d81259', legend:true}; 
  
	this.getLayers();
    }

    function loadLayers(method) {
	if (method == "raster") {
	  for(var key in _LAPULSE.layers[2]) {
	      _LAPULSE.layers[2][key].on('load',function() { increaseCounter(); });
	      _LAPULSE.layers[2][key].addTo(_LAPULSE.map);
	  }
	}
	if (method == "vector") {
	      _LAPULSE.layers[3][1].on('load',function() { alert('test'); });
	      _LAPULSE.layers[3][1].addTo(_LAPULSE.map);
	}
    }
    
    function increaseCounter() {
	count++;
	console.log(count);
	/* if (count == 9) {
	    end = new Date().getTime();
	    // alert(end-start);
	    printToFile(end-start);
	} */
    }
    
    function vectorFinishedLoading() {
	alert('done');
    }
    
    
    function printToFile(d) {
	var params = {};
	params.data = d;
	params.scale = scale;
       $.ajax({
	  type: 'GET',
	    'data': params,
	    'url': 'http://localhost/lapulse/benchmark.php',
	    'success': function(data){
		// alert('success');
	      location.reload(true);
	    },
	    'error': function(response) {
		  console.error(response);
	    }
	}); 
      
      
    }
    
    