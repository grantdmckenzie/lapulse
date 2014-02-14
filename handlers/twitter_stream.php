<?php
require_once('Phirehose.php');
require_once('OauthPhirehose.php');

/**
 * Example of using Phirehose to display a live filtered stream using geo locations
 */
class FilterTrackConsumer extends OauthPhirehose
{
  /**
   * Enqueue each status
   *
   * @param string $status
   */
  public function enqueueStatus($status)
  {
    /*
     * In this simple example, we will just display to STDOUT rather than enqueue.
     * NOTE: You should NOT be processing tweets at this point in a real application, instead they should be being
     *       enqueued and processed asyncronously from the collection process.
     */
 
    $data = json_decode($status, true);
    if (is_array($data) && isset($data['user']['screen_name'])) {
      // echo $data['source'] . "\n";
      $lng = isset($data['coordinates']['coordinates'][0]) ? $data['coordinates']['coordinates'][0] : "-99";
      $lat = isset($data['coordinates']['coordinates'][1]) ? $data['coordinates']['coordinates'][1] : "-99";
      $query = "INSERT INTO tweets (id, userid, tweet, lng, lat, ts, geom) VALUES ('". $data['id'] . "','".pg_escape_string($data['user']['screen_name'])."','".pg_escape_string($data['text'])."','".$lng."','".$lat."','".$data['created_at']."',ST_SetSRID(ST_MakePoint(".$lng.",".$lat."), 4326));";
      pg_query($query) or die();
      // echo $query . "\n";
    }
  }
}


require 'tokens.inc';
require 'db.inc';

// Start streaming
$sc = new FilterTrackConsumer(OAUTH_TOKEN, OAUTH_SECRET, Phirehose::METHOD_FILTER);
$sc->setLocations(array(
       array(-118.871573, 33.564041, -117.486441, 34.337914)	// la
   ));
$sc->consume();