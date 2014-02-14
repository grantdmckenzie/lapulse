<?php

  $a = array("lvg_arts","lvg_college","lvg_nightlife","lvg_food","lvg_outdoor","lvg_professional","lvg_residence","lvg_shop","lvg_travel");

  for($i=1;$i<13;$i++) {
      foreach($a as $aa) {
	$s = explode("_",$aa);
	$style = "la_".substr($s[1],0,4)."_".$i;
        $curl = 'curl -v -u admin:stko1234 -XPOST -H "Content-type: text/xml" -d "<seedRequest><name>stko:'.$aa.'</name><srs><number>900913</number></srs><zoomStart>10</zoomStart><zoomStop>11</zoomStop><format>image/png</format><type>reseed</type><threadCount>1</threadCount><parameters><entry><string>STYLES</string><string>'.$style.'</string></entry></parameters></seedRequest>"  "http://stko-poi.geog.ucsb.edu:8080/geoserver/gwc/rest/seed/stko:'.$aa.'.xml"';
	exec($curl);
	sleep(250);
      }
  }
?>