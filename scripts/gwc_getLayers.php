<?php

  $base = "/var/www/la/";
  $p = array();
  if ($handle = opendir('gwc/')) {
      while (false !== ($entry = readdir($handle))) {
	  if (substr($entry,0,4) == "stko") {
	      // echo $entry . "\n";
	      if ($handle2 = opendir("gwc/".$entry)) {
		  $files = array();
		  while (false !== ($file = readdir($handle2))) {
		      if ($file != "." && $file != "..") {
			  $files[filemtime($base."gwc/".$entry."/".$file)] = $file;
		      }
		  }
		  ksort($files);
		  $t = array();
		  $count = 1;
		  foreach($files as $key=>$file) {
		    $d = explode("_", $file);
		    if(isset($t[$d[2]])) {
		      $t[$d[2]][$count] = $entry . "/".$file;
		    } else {
		      $t[$d[2]] = array();
		      $t[$d[2]][$count] = $entry . "/".$file;
		    }
		    $count++;
		  }
		  $r = explode("_", $entry);
		  $p[$r[2]] = $t;
	      }
	  }
      }
      closedir($handle);
      echo "var dirs=".json_encode($p).";";
  }
?>