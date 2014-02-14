    
    
    
    var layers = {};
    var _base = {};
    var _groupNum = 1;
    var days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    var _sig = 1;
    var _geoserver_base = "http://stko-poi.geog.ucsb.edu:8080/geoserver/gwc/service/wms/";
    var _namespace = "stko:lvg_";   
    

    _base.residence = {color:'f781bf',layer:{},name:'Residence', id: '4e67e38e036454776db1fb3a'};
    _base.college = {color:'377eb8',layer:{}, name: 'College & University', id: '4d4b7105d754a06372d81259'};
    _base.arts = {color:'e41a1c',layer:{},name:'Arts & Entertainment', id: '4d4b7104d754a06370d81259'};
    _base.nightlife = {color:'ff7f00',layer:{},name:'Nightlife Spot', id: '4d4b7105d754a06376d81259'};
    _base.food = {color:'999',layer:{},name:'Food', id: '4d4b7105d754a06374d81259'};
    // _base.event = {color:'ff3',layer:{}};
    _base.outdoor = {color:'ff3',layer:{},name:'Outdoors & Recreation', id: '4d4b7105d754a06377d81259'};
    _base.professional = {color:'a65628',layer:{},name:'Professional & Other Places', id: '4d4b7105d754a06375d81259'};
    _base.shop = {color:'984ea3',layer:{},name:'Shop & Service', id: '4d4b7105d754a06378d81259'};
    _base.travel = {color:'4daf4a',layer:{},name:'Travel & Transport', id: '4d4b7105d754a06379d81259'};

    //getLayers();
    //drawLegend(_base);
    //showLayer(1);
    
    function getLayers() {
	for(var i=_groupNum; i<	(_groupNum+1);i++) {
	    for(var key in _base) {
		/*layers[key+'_'+i] = new L.TileLayer.WMS(_geoserver_base+"stko/wms", {
		    layers: ''+_namespace+key,
		    format: 'image/png',
		    transparent: true,
		    styles: "la_"+key.substring(0,4)+"_"+i,
		    // sld: "http://stko-poi.geog.ucsb.edu/la/sld.php/"+layers[key].color+"/1/"+key,
		    version: '1.1.1'
		}); */
		layers[key+'_'+i] = new L.TileLayer.GWC('http://stko-poi.geog.ucsb.edu/la/gwc/stko_lvg_'+key+'/l{z}_'+i+'/{dir_x}_{dir_y}/{x}_{y}.png',{tms:true});
		layers[key+'_'+i].addTo(_map);
		layers[key+'_'+i].setOpacity(0);
	    }
	}
	_groupNum+=1;
    }
    
    
    function toggleLayer(name) {
	var b = name.split("_");
	name = b[0]+"_"+_sig;
	if(layers[name].options.opacity == 1) {
	  layers[name].setOpacity(0);
	  document.getElementById(b[0]+'_c').style.backgroundColor = '#eeeeee';
	} else {
	  layers[name].setOpacity(1);
	  document.getElementById(b[0]+'_c').style.backgroundColor = '#'+_base[b[0]].color;
	}
	
    }
  
    