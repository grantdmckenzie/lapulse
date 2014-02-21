<?php

  if(!isset($_GET['bbox'])) {
    exit;
  }
  require 'db.inc';
  $bbox = pg_escape_string($_GET['bbox']);
  
  $query = "SELECT lng, lat, trunc((s1/0.25834635998214),5) as s1, basecat FROM lapulse ";
  $query .= "WHERE basecat is not null AND lapulse.geom && ";
  $query .= "ST_MakeEnvelope(".$bbox.", 4326);";
  $res = pg_query($query) or die("DB Error");
  $poi = array();
  while($row = pg_fetch_object($res)) {
    $poi[] = $row;
  }
  pg_free_result($res); 
  echo json_encode($poi, JSON_NUMERIC_CHECK);
  

?>