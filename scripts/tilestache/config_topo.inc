<?php

require_once '../db.inc';

$config = '
{
  "cache": {
    "name": "Disk",
    "path": "/tmp/stache",
    "umask": "0000",
    "dirs": "portable"
  },
  "layers": 
  {
    "'.$k.'_'.$i.'":
	{
	  "allowed origin": "*",
	  "provider": {
	      "class": "TileStache.Goodies.VecTiles:Provider",
	      "kwargs": {
		  "dbinfo": {
		      "host": "'.$dbhost.'",
		      "user": "'.$dbuser.'",
		      "database": "'.$dbname.'",
		      "password": "'.$dbpass.'"
		  },
		  "queries": [
		      "SELECT name, catname, '.$t.', basecat, __geometry__ from public.tilestache"
		  ]
	      }
	  },
	  "projection": "spherical mercator"
	}
  }
}';

?>