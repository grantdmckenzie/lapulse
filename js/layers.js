    
  
    // CONFIG
    var _groupNum = 1;
    var _sig = 1;
    var _map = null;
    $(function() {
	
        _map = L.map('map').setView([33.968064, -118.171692], 10);
	
	// Cloud Made Layer
	L.tileLayer('http://{s}.tile.cloudmade.com/d1abd7c11778439c95f45e03924ab211/115014/256/{z}/{x}/{y}.png', {
	    maxZoom: 18,
	}).addTo(_map);
	
	_LAPULSE.constructBase();
	_LAPULSE.drawLegend();
	_LAPULSE.showLayer(1);
     
    });
    

    


    function getNextTime() {
	// Update Time Label
	var num = _sig % 24;
	var day = days[Math.floor(_sig/24)];
	document.getElementById('lbl').innerHTML = day + " " + num + ":00";
	
	getLayers();
	_sig++;
	showLayer(_sig);
	/*if (_sig%3==2) {
	   getLayers();
	} */
    }
      
    function drawLegend(base) {

    }
  
    