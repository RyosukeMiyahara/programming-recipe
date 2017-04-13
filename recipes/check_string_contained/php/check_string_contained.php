<?php
/**
 * Check specified string is contained or not
 *
 * Check specified string(target) is contained in source string. 
 *
 * @param string $target check this string is contained in source string
 * @param string $source check target string is contained in this string
 * @return boolean true: target is contained in source, false: target isn't contained in source
 */
function isTargetStringContained(string $target, string $source)
{
    if (strpos($source, $target) === false) {
        return false;
    } else {
        return true;
    }
}

$source = "Panda is cute.";
$panda  = "Panda";
$dog    = "Dog";

if (isTargetStringContained($panda, $source)) {
    echo $panda . " is contained in " . $source . "\n";
} else {
    echo $panda . " is not contained in " . $source . "\n";
}

if (isTargetStringContained($dog, $source)) {
    echo $dog . " is contained in " . $source . "\n";
} else {
    echo $dog . " is not contained in " . $source . "\n";
}

exit;
