<?php

  for($i=50;$i<=168;$i++) {
      $k = "vectiles";
      $t = "s".$i;
      $filename = $k."_".$i;
      $extension = $filename."_topo";
      echo "########\t".$extension."\t########\n";
      $file = fopen("/var/www/tilestache/configFiles/".$extension.'.cfg', 'w');
      include 'config_topo.inc';
      fwrite($file, $config);
      fclose($file);
      $seed = "/var/www/TileStache1/scripts/tilestache-seed.py -c configFiles/".$extension.".cfg -l ".$filename." -d tilestache/ -b 33.5678749084473 -118.84309387207 34.3265800476074 -117.49584197998 -e topojson 13 14 15 16 -f progress.txt -q";
      //exec($seed);
      echo $seed;
      break;
      // echo $seed;
  }
?>