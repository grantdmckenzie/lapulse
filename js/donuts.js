var pie = null;
// var color = d3.scale.category20();   
var arc = null;

var color = ['#1f78b4','#b2df8a','#33a02c','#fb9a99','#e31a1c','#6a3d9a','#fdbf6f','#ff7f00','#cab2d6'];
var g = null;
d3.selection.prototype.moveToFront = function() {
  return this.each(function(){
    this.parentNode.appendChild(this);
  });
};
function loadDonut() {


    pie = d3.layout.pie()
	.sort(null);

    arc = d3.svg.arc()
	.innerRadius(40)
	.outerRadius(15);

    donut = d3.select(_LAPULSE.map._container).select("svg").append("g")
	.attr("width", 600)
	.attr("height", 600)
	.attr("id","thedonut")
	.style("visibility","hidden")
	.append("g")
	.attr("transform", "translate(200,200)");
  
}

function setDonutData(d) {
    donut.selectAll(".arc").remove();
    if (d.properties.osid == 0) {
	  if(donut.style("visibility","visible")) {
	    donut.selectAll("path")
		.data(pie([1]))
		.enter().append("path")
		.attr("fill", "#a6cee3")
		.attr("d", arc); 
	  }
    } else if (svm.hasOwnProperty(d.properties.catname)) {
	var x = svm[d.properties.catname];
	if (x.length > 0) {
	  var y = x.slice(1);
	  donut = d3.select(_LAPULSE.map._container).select("svg").append("g")
	    .attr("width", 200)
	    .attr("height", 200)
	    .attr("id","thedonut")
	    .style("visibility","visible")
	    .append("g")
	    .attr("transform", "translate(200,200)");
	  // if(donut.style("visibility","visible")) {
	      var g = donut.selectAll(".arc")
		    .data(pie(y))
		    .enter().append("g")
		    .attr("class", "arc");
      
	      g.append("path")
		    .attr("d", arc)
		    .style("fill", function(d,i) { return color[i]; });
	      
	      g.append("text")
		    .attr("transform", function(d) {
			  var c = arc.centroid(d),
			      x = c[0],
			      y = c[1],
			      h = Math.sqrt(x*x + y*y);
			  return "translate(" + (x/h * 26) +  ',' + (y/h * 26) +  ")"; 
		      })
		    .attr("dy", "0.3em")
		    .style("text-anchor", "middle")
		    .style("fill", function(d,i) {  
			if (i == 1 || i == 3 || i == 6 || i == 8)
			    return "#333333";
			else
			    return "#ffffff";
		      })
		    .style("font", "9px Arial")
		    .text(function(d,i) {
			if (y[i] > 0.1)
			return Math.round(y[i]*100)+"%" ; 
			else
			    return "";
		    });
	  // }
	}
    }
}