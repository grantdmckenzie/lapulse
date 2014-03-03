<?php

error_reporting(E_ALL);
ini_set('display_errors', 1);

  if(!isset($_GET['bbox'])) {
    exit;
  }
  require 'db.inc';
  $bbox = pg_escape_string($_GET['bbox']);
  $herenow = array();
  $query1 = "SELECT token FROM keys order by random() limit 10";
  $result = pg_query($query1) or die("DB Error");
  $tokens = array();
  while($row = pg_fetch_object($result)) {
      $tokens[] = $row->token;
  }
  
  $query = "SELECT id, lat, lng FROM lavenues ";
  $query .= "WHERE lavenues.geom && ";
  $query .= "ST_MakeEnvelope(".$bbox.", 4326);";
  $res = pg_query($query) or die("DB Error");

  $count = 0;
  while($row = pg_fetch_object($res)) {
    if ($count < 100)
      fsQuery($row->id, $row->lat, $row->lng);
    $count++;
  }
  pg_free_result($res); 
  echo json_encode($herenow, JSON_NUMERIC_CHECK);

  function fsQuery($id, $lat, $lng) {
    global $tokens, $herenow;
    $token = rand(0,9);
    
    // var_dump($token);
    $url = "https://api.foursquare.com/v2/venues/".$id."/herenow?oauth_token=".trim($tokens[$token])."&v=20140302";
    $ch = curl_init();
    $timeout = 5; // set to zero for no timeout 
    curl_setopt ($ch, CURLOPT_URL, $url);
    curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
    $file_contents = curl_exec($ch);
    curl_close($ch);
    // display file 
    $file_contents = json_decode($file_contents);
    if($file_contents->meta->code == 200) {
      $r = (Object)array();
      $r->lat = $lat;
      $r->lng = $lng;
      $r->count = $file_contents->response->hereNow->count;
      $herenow[] = $r;
    } 

  }

?>
