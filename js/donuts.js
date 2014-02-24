var pie = null;
// var color = d3.scale.category20();   
var arc = null;

var color = ['#1f78b4','#b2df8a','#33a02c','#fb9a99','#e31a1c','#6a3d9a','#fdbf6f','#ff7f00','#cab2d6'];
var g = null;

function loadDonut() {


    pie = d3.layout.pie()
	.sort(null);

    arc = d3.svg.arc()
	.innerRadius(30)
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
	  if(donut.style("visibility","visible")) {
	      g = donut.selectAll(".arc")
		    .data(pie(y))
		    .enter().append("g")
		    .attr("class", "arc");
      
	      g.append("path")
		    .attr("d", arc)
		    .style("fill", function(d,i) { return color[i]; });
	      
	      g.append("text")
		    .attr("transform", function(d) { return "translate(" + arc.centroid(d) + ")"; })
		    .attr("dy", ".35em")
		    .style("text-anchor", "middle")
		    .style("fill", "White")
		    .style("font", "10px Arial")
		    .text(function(d,i) {
		      return Math.round(y[i]*100) ; 
		      
		    });
	  }
	}
    }
}