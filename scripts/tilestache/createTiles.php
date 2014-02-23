<?php

  $cats = array("1"=>"#1f78b4", "2"=>"#b2df8a", "3"=>"#33a02c", "4"=>"#fb9a99", "5"=>"#e31a1c", "6"=>"#6a3d9a", "7"=>"#fdbf6f", "8"=>"#ff7f00", "9"=>"#cab2d6", "0"=>"#a6cee3
");
  
  for($i=24;$i<=168;$i++) {
    foreach($cats as $k=>$r) {
      $t = "s".$i;
      $filename = $k."_".$i;
      echo "########\t".$filename."\t########\n";
      $file = fopen("/var/www/tilestache/configFiles/".$filename.'.xml', 'w');
      include 'carto.inc';
      fwrite($file, $carto);
      fclose($file);
      $file = fopen("/var/www/tilestache/configFiles/".$filename.'.cfg', 'w');
      include 'config.inc';
      fwrite($file, $config);
      fclose($file);
      $seed = "/home/grantdmckenzie/Downloads/TileStache-1.49.8/scripts/tilestache-seed.py -c /var/www/tilestache/configFiles/".$filename.".cfg -l ".$filename." -d /var/www/tilestache/ -b 33.5678749084473 -118.84309387207 34.3265800476074 -117.49584197998 -e png 12";
      // echo $seed . "\n";
      exec($seed);
    }
  }
?>