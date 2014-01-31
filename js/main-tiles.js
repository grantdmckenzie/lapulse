
    function showLayer(num) {
	for(var key in base) {
	    var current = key+'_'+num;
	    layers[current].setOpacity(1);
	    if(num!=1) {
		var old = key+"_"+(num-1);
		_map.removeLayer(layers[old]);
		delete layers[old];
	    }
	}
    }

    function getNextTime() {
	// Update Time Label
	var num = _sig % 24;
	var day = days[Math.floor(_sig/24)];
	document.getElementById('lbl').innerHTML = day + " " + num + ":00";
	
	_sig++;
	showLayer(_sig);
	if (_sig%5==4) {
	    getLayers();
	}
    }
      
    function drawLegend(base) {
	document.getElementById('legend').innerHTML = "";
	var content = "";
	for(var key in base) {
	      content += "<div id='"+key+"_c' onclick='toggleLayer(\""+key+"\");' style='cursor:pointer;margin:5px;border-radius:5px;width:10px;height:10px;clear:both;float:left;background-color:#"+base[key].color+"'></div> ";
	      content += "<div style='float:left;margin-top:5px;'>"+base[key].name+"</div>";
	}
	document.getElementById('legend').innerHTML = content;
    }