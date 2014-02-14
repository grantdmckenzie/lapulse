<?php
  // Cron job that runs every hour remove tweets older than 1 hour.
  require 'db.inc';
  $query = "delete from tweets where age(clock_timestamp(), ts) > '01:00'";
  echo $query;

?>