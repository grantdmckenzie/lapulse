<?php
  
  require_once '../geoserver_admin.inc';
  
  // Generate the GWC layers
  $a = array("lvg_arts","lvg_college","lvg_nightlife","lvg_food","lvg_outdoor","lvg_professional","lvg_residence","lvg_shop","lvg_travel");

  for($i=1;$i<2;$i++) {
      foreach($a as $aa) {
	$s = explode("_",$aa);
	$style = "la_".substr($s[1],0,4)."_".$i;
        $curl = 'curl -v -u '.$geoserver_username.':'.$geoserver_password.' -XPOST -H "Content-type: text/xml" -d "<seedRequest><name>stko:'.$aa.'</name><gridSetId>EPSG:900913</gridSetId><bounds><coords><double>-14229032.07304346</double><double>1973162.274517791</double><double>-6081762.549246961</double><double>6072936.4705572966</double></coords></bounds><zoomStart>10</zoomStart><zoomStop>10</zoomStop><format>image/png</format><type>reseed</type><threadCount>1</threadCount><parameters><entry><string>STYLES</string><string>'.$style.'</string></entry></parameters></seedRequest>"  "'.$geoserver_url.'/geoserver/gwc/rest/seed/stko:'.$aa.'.xml"';
	//exec($curl);
	//sleep(60);
	echo $curl . "\n";
      }
  }
?>

