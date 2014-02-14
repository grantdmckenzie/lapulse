<?php
  /*  @author: Grant McKenzie
      @date: 30/01/2014
      @contact: grantmckenzie.com
      @function: rename the mest up directory structure that GeoWebCache inflicts on us.
  */
  
  $base = "/var/www/la/";
  if ($handle = opendir('gwc/')) {
      while (false !== ($entry = readdir($handle))) {
	  if (substr($entry,0,4) == "stko") {
	      if ($handle2 = opendir("gwc/".$entry)) {
		  $files = array();
		  while (false !== ($file = readdir($handle2))) {
		      if ($file != "." && $file != "..") {
			  $files[filemtime($base."gwc/".$entry."/".$file)] = $file;
		      }
		  }
		  ksort($files);
		  $count = 1;
		  foreach($files as $key=>$file) {
		    $d = explode("_", $file);
		    if($d[2] == "10") {
		      $oldname = $base."gwc/".$entry."/EPSG_900913_10_".$d[3];
		      $newname = $base."gwc/".$entry."/l10_".$count;
		      rename($oldname, $newname);
		      $oldname = $base."gwc/".$entry."/EPSG_900913_11_".$d[3];
		      $newname = $base."gwc/".$entry."/l11_".$count;
		      rename($oldname, $newname);
		      $count++;
		    }
		  }
	      }
	  }
      }
      closedir($handle);
  }
?>