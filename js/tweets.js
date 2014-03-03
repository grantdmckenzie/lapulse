
 // _LAPULSE.map._initPathRoot();
var svg_tweets = null;
var gtweets = null;
var svg_herenow = null;
var gherenow = null;
  
var prevBurstMode = false;

  _LAPULSE.BurstMode = function() {
      if ($('#burstMode').hasClass('active')) {
	  _burstmode = false;
	  $('#burstMode').removeClass('active');
      } else {
	  _burstmode = true;
	  $('#burstMode').addClass('active');
      }
      this.checkTweetRegion();
  }
  
  _LAPULSE.checkTweetRegion = function() {
    _LAPULSE.map.bounds = _LAPULSE.map.getBounds();
    _LAPULSE.map.zoom = _LAPULSE.map.getZoom();
      if (_LAPULSE.map.getZoom() > 14 && !_burstmode) {
	  $('#burstMode').addClass('available');
	  if(_LAPULSE.toolburst_first == 0)
	    $('#tooltip_burst').delay(2000).fadeIn(2000).delay(5000).fadeOut(2000);
	  _LAPULSE.toolburst_first++;
	  _LAPULSE.localContentOff();
      } else if (_LAPULSE.map.getZoom() > 14 && _burstmode) {
	   prevBurstMode = true;
	  _LAPULSE.localContentOn();
      } else {
	  $('#burstMode').removeClass('available');
	  $('#burstMode').removeClass('active');
	  _burstmode = false;
	  _LAPULSE.localContentOff();
      }
      
      svg_tweets = d3.select(_LAPULSE.map._container).select("svg");
      gtweets = svg_tweets.append("g");
      svg_herenow = d3.select(_LAPULSE.map._container).select("svg");
      gherenow = svg_tweets.append("g");
      // gherenow.selectAll("circle").remove();
      svg_herenow.selectAll("text").remove();
  };	
  
  _LAPULSE.localContentOn = function() {
      if(!this.timer) {
	_LAPULSE.timer = setInterval(function(){
	  _LAPULSE.twitter.getContent();
	},700);
	this.time.beforeBurst = this.time.hour;
	$('#lbl').animate({opacity: 0.2}, 500, 'linear').animate({opacity: 1}, 500, 'linear').animate({opacity: 0.2}, 500, 'linear').animate({opacity: 1}, 500, 'linear').css("color","#ee0000");
	var date = new Date;
	this.time.hour = date.getDay() * 24 + date.getHours()+1;
	this.layers[3][this.time.hour] = new L.TileLayer.d3_topoJSON("http://"+_s+"/tilestache/vectiles_"+this.time.hour+"/{z}/{x}/{y}.topojson", {layerName: "vectile",unloadInvisibleTiles: true,maxZoom:16, minZoom:13});
	this.showCurrent();
	$('#next').addClass('disabled');
	$('#next').unbind('click');
	_LAPULSE.herenow.getPoints();
      }
  }
  _LAPULSE.localContentOff = function() {
      clearInterval(_LAPULSE.timer);
      _LAPULSE.timer = null;
      if(prevBurstMode) {
	this.time.hour = this.time.beforeBurst;
	prevBurstMode = false;
	$('#lbl').css("color","#ffffff");
	$('#next').removeClass('disabled');
	$('#next').on('click',function() {
	     _LAPULSE.increaseHour();
	});
      }
      
      this.showCurrent();
  }
  _LAPULSE.twitter.getContent = function() {
      var params = {'bbox':_LAPULSE.map.bounds.getSouthWest().lng + "," + _LAPULSE.map.bounds.getSouthWest().lat + "," + _LAPULSE.map.bounds.getNorthEast().lng + "," + _LAPULSE.map.bounds.getNorthEast().lat};
      
      $.ajax({
	  url: "handlers/getTweetsFromBbox.php",
	  type: "GET",
	  data: params,
	  dataType: 'json',
	  success: function(data){
	      if(_burstmode)
		_LAPULSE.twitter.drawPoints(data);
	      else
		 _LAPULSE.localContentOff();
	  },
	  error: function(a,b,c) {
	      console.log(b);
	  }
      });
  }
  
  _LAPULSE.twitter.drawPoints = function(data) {
    
	data.forEach(function(d) {
	  d.LatLng = new L.LatLng(d.lat,d.lng)
	});
      _LAPULSE.twitter.layer.push();
      _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1] = gtweets.selectAll("circle")
	  .data(data)
	  .enter().append("circle")
	    .attr("r", "10")
	    .style("stroke","red")
	    .style("stroke-opacity", 1.0)
	    .style("stroke-width",3.0)
	    .style("fill","white")
	    .style("fill-opacity",0.6);
  
	function update() {
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].attr("cx",function(d) { return _LAPULSE.map.latLngToLayerPoint(d.LatLng).x})
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].attr("cy",function(d) { return _LAPULSE.map.latLngToLayerPoint(d.LatLng).y})
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].attr("r", "8")
	  _LAPULSE.twitter.layer[_LAPULSE.twitter.layer-1].transition().duration(1500).attr('r',30.0).style('fill-opacity',0.0).style('stroke-opacity',0.0).remove();
	}
	// _LAPULSE.map.on("viewreset", update);
	update();
  }
  
  // HERE NOW
  
  _LAPULSE.herenow.getPoints = function() {
      var params = {'bbox':_LAPULSE.map.bounds.getSouthWest().lng + "," + _LAPULSE.map.bounds.getSouthWest().lat + "," + _LAPULSE.map.bounds.getNorthEast().lng + "," + _LAPULSE.map.bounds.getNorthEast().lat};
      var loadingd = "<div id='herenowloading' style='width:200px;height:50px;background-color:#ffffff;position:absolute;z-index:300;border-radius:5px;border:solid 1px #333333;padding:10px 20px;top:270px;right:10px;text-align:center;'>Loading Current Popularity Counts<img src='img/loading.gif'/></div>";
      $('#map').append(loadingd);
      $.ajax({
	  url: "handlers/getPointsFromBbox.php",
	  type: "GET",
	  data: params,
	  dataType: 'json',
	  success: function(data){
	      if(_burstmode)
		_LAPULSE.herenow.drawPoints(data);
	      else
		 _LAPULSE.localContentOff();
	      $('#herenowloading').fadeOut();
	  },
	  error: function(a,b,c) {
	      console.log(b);
	  }
      });
  }
  
  _LAPULSE.herenow.drawPoints = function(data) {
     
	data.forEach(function(d) {
	  d.LatLng = new L.LatLng(d.lat,d.lng)
	});
      _LAPULSE.herenow.layer.push();
      _LAPULSE.herenow.layer[_LAPULSE.herenow.layer-1] = gherenow.selectAll("circle")
	  .data(data)
	  .enter().append("circle")
	    .attr("r", "10")
	    .style("stroke-opacity", 0.0)
	    .style("fill","#000000")
	    .style("fill-opacity",0.2);

	function update() {
	  _LAPULSE.herenow.layer[_LAPULSE.twitter.layer-1].attr("cx",function(d) { return _LAPULSE.map.latLngToLayerPoint(d.LatLng).x})
	  _LAPULSE.herenow.layer[_LAPULSE.twitter.layer-1].attr("cy",function(d) { return _LAPULSE.map.latLngToLayerPoint(d.LatLng).y})
	  _LAPULSE.herenow.layer[_LAPULSE.twitter.layer-1].attr("r", "10");
	}
	update();
	
	data.forEach(function(d) {
	 gherenow.append("text")
	  .attr('dx',function() { return _LAPULSE.map.latLngToLayerPoint(d.LatLng).x - 4})
	  .attr('dy',function() { return _LAPULSE.map.latLngToLayerPoint(d.LatLng).y + 5})
	  .style("font", "14px Arial")
	  .style("fill", "#ffffff")
	  .text(d.count);
	});
  }
  