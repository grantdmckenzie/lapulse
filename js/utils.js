
    
    
    _LAPULSE.constructBase = function() {
    
	this.getLayers = function() {
	    for(var i=1; i<6;i++) {
		for(var key in this.base) {
		    var options = {tms:true, unloadInvisibleTiles: true, errorTileUrl:this.const.gwc_base+this.const.errorTile, bounds:this.const.tileBounds};
		    
		    // Overview Layer
		    this.layers[1][i] = new L.TileLayer("http://localhost/tilestache/base_"+i+"/{z}/{x}/{y}.png", {bounds:this.const.tileBounds, unloadInvisibleTiles: true});
		    //this.layers[1][i].addTo(_LAPULSE.map);
		    //this.layers[3][key+'_'+i].setOpacity(0);
		    
		    // Raster Tiles
		    this.layers[2][key+'_'+i] = new L.TileLayer("http://localhost/tilestache/"+this.base[key].id+"_"+i+"/{z}/{x}/{y}.png", {bounds:this.const.tileBounds, unloadInvisibleTiles: true});
		    //this.layers[2][key+'_'+i].addTo(_LAPULSE.map);
		    //this.layers[2][key+'_'+i].setOpacity(0);
		    
		    // Vector Tiles
		    this.layers[3][key+'_'+i] = new L.TileLayer.d3_topoJSON("http://localhost/tilestache/"+this.base[key].id+"_"+i+"/{z}/{x}/{y}.topojson", {layerName: "vectile",unloadInvisibleTiles: true,});
		    //this.layers[3][key+'_'+i].addTo(_LAPULSE.map);
		    //this.layers[3][key+'_'+i].setOpacity(0);
		}
	    }
	}    
	this.base = {};
	this.layers = [];
	this.layers[1] = {};
	this.layers[2] = {};
	this.layers[3] = {};

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
    
    _LAPULSE.drawLegend = function() {
	$('#legend').html("");
	var content = "";
	if(this.scale.level == 1) {
	  content = "<div id='"+key+"_c' onclick='_LAPULSE.toggleLayer(\""+key+"\");' style='cursor:pointer;margin:5px;border:solid 1px #333333;border-radius:5px;width:10px;height:10px;clear:both;float:left;background-color:#ffffff'></div> ";
	  content += "<div style='float:left;margin-top:5px;'>All Venues</div>";
	  $('#legend').animate({height:"25px"});
	} else {
	  $('#legend').animate({height:"180px"});
	  for(var key in this.base) {
	    if (!this.base[key].legend)
		var col = "eeeeee";
	    else
		var col = this.base[key].color;
		content += "<div id='"+key+"_c' onclick='_LAPULSE.toggleLayer(\""+key+"\");' style='cursor:pointer;margin:5px;border-radius:5px;width:10px;height:10px;clear:both;float:left;background-color:#"+col+"'></div> ";
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
	    _LAPULSE.map.removeLayer(this.layers[3][key]);
	}
    }
    
    _LAPULSE.showPOI = function(num) {
      if (this.scale.level != this.scale.prevlevel || num != this.time.prev) {
	  if (this.scale.level == 1) {
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
	      for(var key in this.layers[3]) {
		  var x = key.split("_");
		  this.layers[3][x[0]+"_"+num].addTo(this.map);
	      }
	  }
	  this.drawLegend();
      }
      this.scale.prevlevel = this.scale.level;
      this.time.prev = num;
    }
    
    _LAPULSE.toggleLayer = function(name) {
	var b = name.split("_");
	name = b[0]+"_"+this.time.hour;
	if(this.layers[2][name].options.opacity == 1) {
	  this.layers[2][name].setOpacity(0);
	  document.getElementById(b[0]+'_c').style.backgroundColor = '#eeeeee';
	  this.base[b[0]].legend = false;
	} else {
	  this.layers[2][name].setOpacity(1);
	  document.getElementById(b[0]+'_c').style.backgroundColor = '#'+this.base[b[0]].color;
	  this.base[b[0]].legend = true;
	}
    }
    
    _LAPULSE.checkScale = function() {
	if (_LAPULSE.map.getZoom() == 10) {
	    _LAPULSE.scale.level = 1;
	} else if (_LAPULSE.map.getZoom() >=11 && _LAPULSE.map.getZoom() <= 13) {
	    _LAPULSE.scale.level = 2;
	} else if (_LAPULSE.map.getZoom() >=14 && _LAPULSE.map.getZoom() <= 17) {
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