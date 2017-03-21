<?php
spl_autoload_register(function ($className) {
//die($className . PHP_EOL);
$filename = str_replace("\\", DIRECTORY_SEPARATOR, $className);
require_once("{$filename}.class.php");
});

