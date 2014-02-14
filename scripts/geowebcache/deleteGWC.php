<?php
  /*  @author: Grant McKenzie
      @date: 30/01/2014
      @contact: grantmckenzie.com
      @function: delete the messed up directory structure that GeoWebCache inflicts on us.
  */
  
  $base = "/var/www/la/";
  if ($handle = opendir($base.'gwc/')) {
      while (false !== ($entry = readdir($handle))) {
	  if (substr($entry,0,4) == "stko") {
	      if ($handle2 = opendir($base."gwc/".$entry)) {
		  $files = array();
		  while (false !== ($file = readdir($handle2))) {
		      if ($file != "." && $file != "..") {
			  deleteDirectory($base."gwc/".$entry."/".$file);
		      }
		  }
	      }
	  }
      }
      closedir($handle);
  }
  
  function deleteDirectory($dirPath) {
    if (is_dir($dirPath)) {
        $objects = scandir($dirPath);
        foreach ($objects as $object) {
            if ($object != "." && $object !="..") {
                if (filetype($dirPath . DIRECTORY_SEPARATOR . $object) == "dir") {
                    deleteDirectory($dirPath . DIRECTORY_SEPARATOR . $object);
                } else {
                    unlink($dirPath . DIRECTORY_SEPARATOR . $object);
                }
            }
        }
    reset($objects);
    rmdir($dirPath);
    }
  }
?>