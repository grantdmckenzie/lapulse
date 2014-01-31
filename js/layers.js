    var _map = L.map('map').setView([33.968064, -118.171692], 10);
    
    var layers = {};
    var base = {};
    var _groupNum = 1;
    var days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    var _sig = 1;
    var _geoserverbase = "http://stko-poi.geog.ucsb.edu:8080/geoserver/gwc/service/wms/";
    var _namespace = "stko:lvg_";   
    
    L.tileLayer('http://{s}.tile.cloudmade.com/d1abd7c11778439c95f45e03924ab211/87782/256/{z}/{x}/{y}.png', {
	    maxZoom: 18,
    }).addTo(_map);
    
    // var layer = L.tileLayer('http://stko-poi.geog.ucsb.edu/la/gwc/stko_lvg_arts/EPSG_900913_{z}/02_09/0{x}_0{y}.png',{tms:true});
    // var layer2 = new L.TileLayer.GWC('http://stko-poi.geog.ucsb.edu/la/gwc/stko_lvg_arts/EPSG_900913_{z}_f88d1c11ca9bb803653acd098659ef6032b59bb5/{dir_x}_{dir_y}/{x}_{y}.png',{tms:true});
    // layer2.addTo(_map);
    
    base.residence = {color:'f781bf',layer:{},name:'Residence'};
    base.college = {color:'377eb8',layer:{}, name: 'College & University '};
    base.arts = {color:'e41a1c',layer:{},name:'Arts & Entertainment'};
    base.nightlife = {color:'ff7f00',layer:{},name:'Nightlife Spot'};
    base.food = {color:'999',layer:{},name:'Food'};
    // base.event = {color:'ff3',layer:{}};
    base.outdoor = {color:'ff3',layer:{},name:'Outdoors & Recreation'};
    base.professional = {color:'a65628',layer:{},name:'Professional & Other Places'};
    base.shop = {color:'984ea3',layer:{},name:'Shop & Service'};
    base.travel = {color:'4daf4a',layer:{},name:'Travel & Transport'};

    getLayers();
    drawLegend(base);
    showLayer(1);
    
    function getLayers() {
	for(var i=_groupNum; i<	(_groupNum+5);i++) {
	    for(var key in base) {
		/*layers[key+'_'+i] = new L.TileLayer.WMS(_geoserverbase+"stko/wms", {
		    layers: ''+_namespace+key,
		    format: 'image/png',
		    transparent: true,
		    styles: "la_"+key.substring(0,4)+"_"+i,
		    // sld: "http://stko-poi.geog.ucsb.edu/la/sld.php/"+layers[key].color+"/1/"+key,
		    version: '1.1.1'
		}); */
		var x = dirs[key];
		layers[key+'_'+i] = new L.TileLayer.GWC('http://stko-poi.geog.ucsb.edu/la/gwc/'+x[10][i]+'/{dir_x}_{dir_y}/{x}_{y}.png',{tms:true});
		layers[key+'_'+i].addTo(_map);
		layers[key+'_'+i].setOpacity(0);
	    }
	}
	_groupNum+=5;
    }
    
    
    function toggleLayer(name) {
	var b = name.split("_");
	name = b[0]+"_"+_sig;
	if(layers[name].options.opacity == 1) {
	  layers[name].setOpacity(0);
	  document.getElementById(b[0]+'_c').style.backgroundColor = '#eeeeee';
	} else {
	  layers[name].setOpacity(1);
	  document.getElementById(b[0]+'_c').style.backgroundColor = '#'+base[b[0]].color;
	}
	
    }
  
    