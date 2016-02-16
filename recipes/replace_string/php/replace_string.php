<?php
// Replace "Super" to "Great"
$str_original  = "Super panda";
$str_replaced1 = str_replace("Super", "Great", $str_original);
echo $str_replaced1 . "\n";
echo "\n";

// Replace multiple words using array
$search_array  = array("foo", "bar");
$str_replaced2 = str_replace($search_array, "panda", "foo, bar");
echo $str_replaced2 . "\n";
echo "\n";

// Get the number of replaced strings
$count = 0;
$str_replaced3 = str_replace("dog", "panda", "dog, dog, dog!", $count);
echo $str_replaced3 . "\n";
echo $count . " dogs are replaced to panda\n";
?>