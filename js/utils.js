
    var _LAPULSE = {};
    _LAPULSE.const = {};
    _LAPULSE.const.gwc_base = "http://stko-poi.geog.ucsb.edu/prod/gwc/";
    _LAPULSE.const.namespace = "stko_lvg_"; 
    _LAPULSE.const.days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    _LAPULSE.const.errorTile = "http://stko-poi.geog.ucsb.edu/la/gwc/empty.png";
    _LAPULSE.const.tileBounds = L.latLngBounds(L.latLng(33.5846214294434, -118.838417053223), L.latLng(34.3280487060547, -117.515472412109));
    
    
    _LAPULSE.constructBase = function() {
    
	this.getLayers = function() {
	    for(var i=_groupNum; i<(_groupNum+1);i++) {
		for(var key in this.base) {
		    var options = {tms:true, unloadInvisibleTiles: true, errorTileUrl:'http://stko-poi.geog.ucsb.edu/la/gwc/empty.png', bounds:this.const.tileBounds};
		    // this.layers[key+'_'+i] = new L.tileLayer(this.const.gwc_base + this.const.namespace +key+'/1/{z}/{x}/{y}.png', options);
		    this.layers[key+'_'+i] = new L.TileLayer.GWC(this.const.gwc_base + this.const.namespace +key+'/l{z}_'+i+'/{dir_x}_{dir_y}/{x}_{y}.png', options);
		    this.layers[key+'_'+i].addTo(_map);
		    this.layers[key+'_'+i].setOpacity(0);
		}
	    }
	    _groupNum+=1;
	}    
	this.base = {};
	this.layers = {};
	
	this.base.residence = {color:'f781bf',layer:{},name:'Residence', id: '4e67e38e036454776db1fb3a'};
	this.base.college = {color:'377eb8',layer:{}, name: 'College & University', id: '4d4b7105d754a06372d81259'};
	this.base.arts = {color:'e41a1c',layer:{},name:'Arts & Entertainment', id: '4d4b7104d754a06370d81259'};
	this.base.nightlife = {color:'ff7f00',layer:{},name:'Nightlife Spot', id: '4d4b7105d754a06376d81259'};
	this.base.food = {color:'999',layer:{},name:'Food', id: '4d4b7105d754a06374d81259'};
	// this.base.event = {color:'ff3',layer:{}};
	this.base.outdoor = {color:'ff3',layer:{},name:'Outdoors & Recreation', id: '4d4b7105d754a06377d81259'};
	this.base.professional = {color:'a65628',layer:{},name:'Professional & Other Places', id: '4d4b7105d754a06375d81259'};
	this.base.shop = {color:'984ea3',layer:{},name:'Shop & Service', id: '4d4b7105d754a06378d81259'};
	this.base.travel = {color:'4daf4a',layer:{},name:'Travel & Transport', id: '4d4b7105d754a06379d81259'}; 
  
	this.getLayers();
    }
    
    _LAPULSE.drawLegend = function() {
     	document.getElementById('legend').innerHTML = "";
	var content = "";
	for(var key in this.base) {
	      content += "<div id='"+key+"_c' onclick='toggleLayer(\""+key+"\");' style='cursor:pointer;margin:5px;border-radius:5px;width:10px;height:10px;clear:both;float:left;background-color:#"+this.base[key].color+"'></div> ";
	      content += "<div style='float:left;margin-top:5px;'>"+this.base[key].name+"</div>";
	}
	document.getElementById('legend').innerHTML = content; 
    }
    
    _LAPULSE.showLayer = function(num) {
	for(var key in this.base) {
	    var current = key+'_'+num;
	    this.layers[current].setOpacity(1);
	    if(num!=1) {
		var old = key+"_"+(num-1);
		_map.removeLayer(this.layers[old]);
		delete this.layers[old];
	    }
	}
    }