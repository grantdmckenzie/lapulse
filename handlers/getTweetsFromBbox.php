<?php

  if(!isset($_GET['bbox'])) {
    exit;
  }
  require 'db.inc';
  $bbox = pg_escape_string($_GET['bbox']);

  $query = "SELECT lng, lat FROM tweets ";
  $query .= "WHERE ts > (now()) AND tweets.geom && ";
  $query .= "ST_MakeEnvelope(".$bbox.", 4326);";
  // echo $query . "\n";
  $res = pg_query($query) or die("DB Error");
  $poi = array();
  while($row = pg_fetch_object($res)) {
    $poi[] = $row;
  }
  pg_free_result($res); 
  echo json_encode($poi, JSON_NUMERIC_CHECK);
  

?>
