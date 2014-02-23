<?php

  $cats = array("1"=>"#1f78b4", "2"=>"#b2df8a", "3"=>"#33a02c", "4"=>"#fb9a99", "5"=>"#e31a1c", "6"=>"#6a3d9a", "7"=>"#fdbf6f", "8"=>"#ff7f00", "9"=>"#cab2d6", "0"=>"#a6cee3
");
  
  for($i=1;$i<=24;$i++) {
      $k = "vectiles";
      $t = "s".$i;
      $filename = $k."_".$i;
      $extension = $filename."_topo";
      echo "########\t".$extension."\t########\n";
      $file = fopen("/var/www/tilestache/configFiles/".$extension.'.cfg', 'w');
      include 'config_topo.inc';
      fwrite($file, $config);
      fclose($file);
      $seed = "/home/grantdmckenzie/Downloads/TileStache-1.49.8/scripts/tilestache-seed.py -c /var/www/tilestache/configFiles/".$extension.".cfg -l ".$filename." -d /var/www/tilestache/ -b 33.5678749084473 -118.84309387207 34.3265800476074 -117.49584197998 -e topojson 13";
      exec($seed);
      // echo $seed;
  }
?>