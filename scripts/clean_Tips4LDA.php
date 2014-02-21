<?php
    $filename = "/home/poi/db_backups/tipsagg.csv";

    $file = fopen($filename,"r");
      $match = false;
      $count = 0;
      while(!feof($file)) {
	  $line = fgets($file);
	  $columns = explode(",",$line,2);
	  // echo $columns[0] . "\n";
	  $line = preg_match('/[^a-z_\-0-9]/i',$columns[1]);
	  echo $line . "\n";
	  $l = explode(" ",$line);
	  foreach($l as $r) {
	      if (strlen($r) > 2) {
		  echo $r . " ";
	      }
	  }
      }



?>  