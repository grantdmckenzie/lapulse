<?php
  echo $_GET['scale'] . "\n";
  echo $_GET['data'];
  
  $file = fopen("/var/www/lapulse/benchmark_vector16.csv","a");
  $content = $_GET["scale"].",".$_GET["data"]."\n";
  fwrite($file, $content);
  fclose($file);
  
?>