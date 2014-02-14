<?php

  error_reporting(E_ALL);
  ini_set('display_errors', 1);
 
  require_once('../db.inc');
  
  $query = "select level0, name from categories_full where level1 = ''";
  $result = pg_query($query) or die();
  $cnt = 1;
  while($row = pg_fetch_object($result)) {
     printCSV($row->level0, str_replace(" ","_",$row->name));
  }
  pg_free_result($result);
  
  function printCSV($id, $name) {
      global $cnt;
      // $f = "poi".$cnt;
      
      $query = "select name, round(((st_x(geom)+118.86653854235)*1324.0/1.3744633513699966)*100)/100 as lng, round((768.0 - ((st_y(geom)-33.56458)*768.0/0.770257967229))*100)/100 as lat ";
      
      $query .= "FROM la_venues_geom where basecat = '".$id."'";
      $result = pg_query($query) or die();
      if(pg_num_rows($result) > 0) {
	$f = "poi".$cnt;
	echo $id . "\t" . $f . "\t" . $name . "\n";
	
	$file = fopen($f.".csv","w");
	echo $id . "\t" . $f . "\t" . $name . "\n";
	while($row = pg_fetch_object($result)) {
	      fwrite($file, $row->lng .",".$row->lat."\n");
	}
	fclose($file);
        exec("./cluster_dbscan.r \"".$f."\" \"poi1/".$f.".js\""); 
	exec("rm ".$f.".csv");
	$cnt++;
      }
      
  }
?>