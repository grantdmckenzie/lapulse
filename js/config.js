    // CONFIG
    var _groupNum = 1;
    var _MACHINE = "dev";
    var _LAPULSE = {};
    _LAPULSE.const = {};
    _LAPULSE.map = null;
    _LAPULSE.scale = {level:null, prevlevel:null};
    _LAPULSE.time = {hour:1, prev:0};
    _LAPULSE.const.gwc_base = "http://stko-poi.geog.ucsb.edu/"+_MACHINE+"/gwc/";
    _LAPULSE.const.namespace = "stko_lvg_"; 
    _LAPULSE.time.days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    _LAPULSE.const.errorTile = "empty.png";
    _LAPULSE.const.tileBounds = L.latLngBounds(L.latLng(33.5846214294434, -118.838417053223), L.latLng(34.3280487060547, -117.515472412109));