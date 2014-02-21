<?php

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
        "provider": {"name": "mapnik", "mapfile": "/var/www/tilestache/configFiles/'.$k.'_'.$i.'.xml"},
        "projection": "spherical mercator"
    }
  }
}';

?>