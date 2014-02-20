<?php

  $cats = array("4d4b7104d754a06370d81259"=>"#e41a1c", "4d4b7105d754a06372d81259"=>"#377eb8", "4d4b7105d754a06374d81259"=>"#4daf4a", "4d4b7105d754a06376d81259"=>"#984ea3", "4d4b7105d754a06377d81259"=>"#ff7f00", "4d4b7105d754a06375d81259"=>"#ffff33", "4e67e38e036454776db1fb3a"=>"#a65628", "4d4b7105d754a06378d81259"=>"#f781bf", "4d4b7105d754a06379d81259"=>"#999999");
  
  for($i=1;$i<=168;$i++) {
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
      $seed = "/home/grantdmckenzie/Downloads/TileStache-1.49.8/scripts/tilestache-seed.py -c /var/www/tilestache//var/www/tilestache/configFiles/".$filename.".cfg -l ".$filename." -d /var/www/tilestache/ -b 33.5678749084473 -118.84309387207 34.3265800476074 -117.49584197998 -e png 11";
      // echo $seed . "\n";
      exec($seed);
    }
  }
?>