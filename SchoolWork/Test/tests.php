<?php
require 'test.php';

  $obj = new Test();
  $obj->myfun();
  echo "\n";
  $obj->input(1000);
  $obj->myfun();
  echo "\n";
  $obj->input(1000-900);
  $obj->myfun();
  echo "\n";
  print $obj->get();
?>