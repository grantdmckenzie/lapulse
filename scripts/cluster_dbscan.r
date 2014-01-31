#!/usr/bin/Rscript

args <- commandArgs(TRUE)

library(fpc);
library(jsonlite);

# args: input filename, output filename, minDistance, minPoints;
# EXAMPLE: clusterPOI("testpoi.csv", "4d4b7104d754a06370d81259.json", 10, 2);

clusterPOI <- function(inCSV, outJSON, eps, minPts) {
    x <- read.csv(paste(inCSV,"csv",sep="."), header=F);
    db <- dbscan(x, eps, minPts);
    y <- predict(db,x);

    data <- list();

    for (i in 1:nrow(x)) {
      r = y[i] + 1;
      if (length(data) <= r) {
	data[[r]] <- matrix(numeric(), ncol=2);
      }
    }
    for (i in 1:nrow(x)) {
      r = y[i] + 1;
      data[[r]] <- rbind(data[[r]], c(x[i,1], x[i,2]));
    }
    base = data[[1]];
    for (i in 1:length(data)) {
      if (i > 1) {
	base <- rbind(base, c(mean(data[[i]][,1]), mean(data[[i]][,2])));
      }
    }
    
    cat("var ", file=outJSON);
    cat(args[1], file=outJSON, append=TRUE);
    cat("=", file=outJSON, append=TRUE);
    cat(toJSON(base), file=outJSON, append=TRUE);
    cat(";", file=outJSON, append=TRUE);
    
    return(nrow(x) / nrow(base));
}

clusterPOI(args[1], args[2], 1, 2);