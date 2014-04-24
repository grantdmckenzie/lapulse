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
	$('#ddarrow').on('click',function() {
	    $('#choosetime').show();
	});
	$('#next').on('click',function() {
	     _LAPULSE.increaseHour();
	});
	$('#choose_submit').on('click',function() {
	    $('#choosetime').hide();
	    var date = new Date;
	    if($('#choose_ap').val() == "am") 
		var am = 0;
	    else
		var am = 12;
	    _LAPULSE.time.hour = parseInt($('#choose_date').val()) * 24 + parseInt($('#choose_time').val())+1 + am;
	   /* _LAPULSE.layers[1][_LAPULSE.time.hour] = new L.TileLayer("http://"+_s+"/tilestache/base_"+_LAPULSE.time.hour+"/{z}/{x}/{y}.png", {bounds:_LAPULSE.const.tileBounds, unloadInvisibleTiles: true, maxZoom:10});
	    _LAPULSE.layers[1][_LAPULSE.time.hour].addTo(_LAPULSE.map);
	    _LAPULSE.layers[1][_LAPULSE.time.hour].setOpacity(0); */
	   
	   _LAPULSE.addEvenMoreLayers();
	    _LAPULSE.showCurrent();
	});
	
      
        _LAPULSE.map = L.map('map').setView([33.968064, -118.171692], 10);
	L.control.scale().addTo(_LAPULSE.map);
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
	    // _LAPULSE.showPOI(_LAPULSE.time.hour);
	    _LAPULSE.checkTweetRegion();
	});
	
	loadDonut();
	document.onkeydown = checkKey;

    });


  function checkKey(e) {

      e = e || window.event;

      if (e.keyCode == '39') {
	  _LAPULSE.increaseHour();
      }
  }


  
    