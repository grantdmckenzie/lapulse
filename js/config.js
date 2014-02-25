    // CONFIG
    
    
    var _prod = true; // Change for local or server
    
    var _s = _prod ? "stko-poi.geog.ucsb.edu" : "localhost";
    var _burstmode = false;
    var _LAPULSE = {};
    _LAPULSE.const = {};
    _LAPULSE.map = null;
    _LAPULSE.scale = {level:null, prevlevel:null};
    _LAPULSE.time = {hour:1, prev:0};
    _LAPULSE.const.namespace = "stko_lvg_"; 
    _LAPULSE.time.days = ["SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"];
    _LAPULSE.const.errorTile = "empty.png";
    _LAPULSE.const.tileBounds = L.latLngBounds(L.latLng(33.5846214294434, -118.838417053223), L.latLng(34.3280487060547, -117.515472412109));
    _LAPULSE.twitter = {};
    _LAPULSE.twitter.layer = [];
    _LAPULSE.timer = null;