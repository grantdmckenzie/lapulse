    /*============================================
    * author Grant McKenzie
    * email grant@geog.me
    * date 1/1/2014
    * project LACityPulse 
    * ========================================= */
    var donut = null;
    
    $(function() {
      
	$('#close').on('click',function() {
	    $('#loadingbg').fadeOut();
	    $('#loading').fadeOut();
	});
	$('#loadingbg').on('click',function() {
	    $('#loadingbg').fadeOut();
	    $('#loading').fadeOut();
	});
      
        _LAPULSE.map = L.map('map').setView([33.968064, -118.171692], 10);
	_LAPULSE.map._initPathRoot();

	// Add a fake GeoJSON line to coerce Leaflet into creating the <svg> tag that d3_geoJson needs
	new L.geoJson({"type": "LineString","coordinates":[[0,0],[0,0]]}).addTo(_LAPULSE.map);
	
	// Base Map
	L.tileLayer('http://{s}.tile.cloudmade.com/d1abd7c11778439c95f45e03924ab211/115014/256/{z}/{x}/{y}.png', {maxZoom: 16,}).addTo(_LAPULSE.map);
	
	_LAPULSE.constructBase();
	_LAPULSE.drawLegend();
	_LAPULSE.checkScale();
	_LAPULSE.showPOI(_LAPULSE.time.hour);
	
	_LAPULSE.map.on('moveend', function(e) {
	    _LAPULSE.checkScale();
	    _LAPULSE.showPOI(_LAPULSE.time.hour);
	    _LAPULSE.checkTweetRegion();
	});
	
	loadDonut();
    });





  
    