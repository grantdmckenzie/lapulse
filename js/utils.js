
    
    
    _LAPULSE.constructBase = function() {
    
	this.getLayers = function() {
	    for(var i=1; i<=24;i++) {
		for(var key in this.base) {
		    // Raster Tiles
		    this.layers[2][key+'_'+i] = new L.TileLayer("http://localhost/tilestache/"+this.base[key].id+"_"+i+"/{z}/{x}/{y}.png", {bounds:this.const.tileBounds, unloadInvisibleTiles: true});
		}
		// Overview Layer
		this.layers[1][i] = new L.TileLayer("http://localhost/tilestache/base_"+i+"/{z}/{x}/{y}.png", {bounds:this.const.tileBounds, unloadInvisibleTiles: true});
		// Vector Tiles
		this.layers[3][i] = new L.TileLayer.d3_topoJSON("http://localhost/tilestache/vectiles_"+i+"/{z}/{x}/{y}.topojson", {layerName: "vectile",unloadInvisibleTiles: true,});
	    }
	}    
	this.base = {};
	this.layers = [];
	this.layers[1] = {};
	this.layers[2] = {};
	this.layers[3] = {};

	this.base.res = {color:'a6cee3',layer:{},name:'Residential', id: '0', legend:false};
	this.base.acc = {color:'1f78b4',layer:{}, name: 'Accommodation, Eating and Drinking', id: '1', legend:true};
	this.base.att = {color:'b2df8a',layer:{},name:'Attractions', id: '2', legend:true};
	this.base.com = {color:'33a02c',layer:{},name:'Commercial Services', id: '3', legend:true};
	this.base.edu = {color:'fb9a99',layer:{},name:'Education and Health', id: '4', legend:true};
	this.base.ent = {color:'e31a1c',layer:{},name:'Entertainment and Nightlife', id: '5', legend:true};
	this.base.pub = {color:'6a3d9a',layer:{},name:'Public Infrastructure and Community', id: '6', legend:true};
	this.base.ret = {color:'fdbf6f',layer:{},name:'Retail', id: '7', legend:true};
	this.base.spo = {color:'ff7f00',layer:{},name:'Sports and Recreation', id: '8', legend:true}; 
	this.base.tra = {color:'cab2d6',layer:{},name:'Transportation', id: '9', legend:true}; 
	
	this.getLayers();
    }
    
    _LAPULSE.drawLegend = function() {
	$('#legend').html("");
	var content = "";
	if(this.scale.level == 1) {
	  content = "<div id='"+key+"_c' onclick='_LAPULSE.toggleLayer(\""+key+"\");' style='cursor:pointer;margin:5px;border:solid 1px #333333;border-radius:5px;width:10px;height:10px;clear:both;float:left;background-color:#ffffff'></div> ";
	  content += "<div style='float:left;margin-top:5px;'>All Venues</div>";
	  $('#legend').animate({height:"25px"});
	} else {
	  $('#legend').animate({height:"200px"});
	  for(var key in this.base) {
	    if (!this.base[key].legend)
		var col = "#ffffff; background-image: url(\"img/hidden.png\");";
	    else
		var col = "#"+this.base[key].color+"; background-image: none;";
		content += "<div id='"+key+"_c' onclick='_LAPULSE.toggleLayer(\""+key+"\");' style='cursor:pointer;margin:5px;border-radius:5px;width:10px;height:10px;clear:both;float:left;background-color:"+col+"'></div> ";
		content += "<div style='float:left;margin-top:5px;'>"+this.base[key].name+"</div>";
	  }
	}
	document.getElementById('legend').innerHTML = content; 
    }
    
    _LAPULSE.hideLevel1 = function() {
	for(var key in this.layers[1]) {
	    _LAPULSE.map.removeLayer(this.layers[1][key]);
	}
    }
    _LAPULSE.hideLevel2 = function() {
	for(var key in this.layers[2]) {
	    _LAPULSE.map.removeLayer(this.layers[2][key]);
	}
    }
    _LAPULSE.hideLevel3 = function() {
	for(var key in this.layers[3]) {
	    _LAPULSE.map.removeLayer(_LAPULSE.layers[3][key]);
	}
	d3.select(_LAPULSE.map._container).select("svg").selectAll("circle").remove();	// get rid of previous svg
    }
    
    _LAPULSE.showPOI = function(num) {
      if (this.scale.level != this.scale.prevlevel || num != this.time.prev) {
	  if (this.scale.level == 1) {
	      this.hideLevel1();
	      this.hideLevel2();
	      this.hideLevel3();
	      this.layers[1][num].addTo(this.map);
	      
	  } else if (this.scale.level == 2) {
	      this.hideLevel1();
	      this.hideLevel2();
	      this.hideLevel3();
	      for(var key in this.layers[2]) {
		  var x = key.split("_");
		  this.layers[2][x[0]+"_"+num].addTo(this.map);
		  if (!this.base[x[0]].legend)
		      this.layers[2][x[0]+"_"+num].setOpacity(0);
	      }
	  } else if (this.scale.level == 3) {
	      this.hideLevel1();
	      this.hideLevel2();
	      this.hideLevel3();
	      _LAPULSE.layers[3][num].addTo(_LAPULSE.map);
	  }
	  this.drawLegend();
      }
      if (this.scale.level == 3)
	this.checkVectorVis();
      this.scale.prevlevel = this.scale.level;
      this.time.prev = num;
    }
    
    
    _LAPULSE.toggleLayer = function(name) {
	var b = name.split("_");
	name = b[0]+"_"+this.time.hour;
	if(this.scale.level < 3) {
	  if(this.layers[2][name].options.opacity == 1) {
	    this.layers[2][name].setOpacity(0);
	    document.getElementById(b[0]+'_c').style.backgroundColor = '#ffffff';
	    document.getElementById(b[0]+'_c').style.backgroundImage = "url(\"img/hidden.png\")";
	    this.base[b[0]].legend = false;
	  } else {
	    this.layers[2][name].setOpacity(1);
	    document.getElementById(b[0]+'_c').style.backgroundColor = '#'+this.base[b[0]].color;
	    document.getElementById(b[0]+'_c').style.backgroundImage = "none";
	    this.base[b[0]].legend = true;
	  }
	} else {
	   var x = d3.select(_LAPULSE.map._container).select("svg").selectAll("[osid='"+this.base[b[0]].id+"']");
	   if (x.style("visibility") != "hidden") {
	      x.style("visibility","hidden");
	      document.getElementById(b[0]+'_c').style.backgroundColor = '#ffffff';
	      document.getElementById(b[0]+'_c').style.backgroundImage = "url(\"img/hidden.png\")"
	      this.base[b[0]].legend = false;
	   } else {
	      x.style("visibility","visible");
	      document.getElementById(b[0]+'_c').style.backgroundColor = '#'+this.base[b[0]].color;
	      document.getElementById(b[0]+'_c').style.backgroundImage = "none";
	      this.base[b[0]].legend = true;
	   } 
	}
    }
    
    _LAPULSE.checkVectorVis = function() {
     	   for(var key in this.base) {
	      var x = d3.select(_LAPULSE.map._container).select("svg").selectAll("[osid='"+this.base[key].id+"']");
	      if(!this.base[key].legend) {
		  x.style("visibility","hidden");
	      } else {
		  x.style("visibility","visible");
	      }
	   }
	  
    }
    _LAPULSE.VectorMarkerSize = function() {
     	   if(this.map.getZoom() == 13)
	     d3.select(_LAPULSE.map._container).select("svg").selectAll("circle").attr("r","7");
	   if(this.map.getZoom() == 14)
	     d3.select(_LAPULSE.map._container).select("svg").selectAll("circle").attr("r","8");
	   if(this.map.getZoom() == 15)
	     d3.select(_LAPULSE.map._container).select("svg").selectAll("circle").attr("r","10");
	   if(this.map.getZoom() == 16)
	     d3.select(_LAPULSE.map._container).select("svg").selectAll("circle").attr("r","15"); 
    }
    
    _LAPULSE.checkScale = function() {
	if (_LAPULSE.map.getZoom() == 10) {
	    _LAPULSE.scale.level = 1;
	} else if (_LAPULSE.map.getZoom() >=11 && _LAPULSE.map.getZoom() <= 12) {
	    _LAPULSE.scale.level = 2;
	} else if (_LAPULSE.map.getZoom() >=13 && _LAPULSE.map.getZoom() <= 17) {
	    _LAPULSE.scale.level = 3;
	}
    }
    
    _LAPULSE.increaseHour = function() {
	// Update Time Label
	var num = this.time.hour % 24;
	var day = this.time.days[Math.floor(this.time.hour/24)];
	$('#lbl').html(day + " " + num + ":00");
	
	this.time.hour++;
	this.showPOI(this.time.hour);
    }