SET YMODEL

/
$ifi "%limitY3%"=="Y3_2016"        ONEYEAR
$ifi "%limitY3%"=="Y3_2030"        ONEYEAR
$ifi "%limitY3%"=="Y3_2016_20"     ONEYEAR,TWOYEAR
$ifi "%limitY3%"=="Y3_2012_20_30"  ONEYEAR,TWOYEAR,THREEYEAR
$ifi "%limitY3%"=="Y3_2016_20_30"  ONEYEAR,TWOYEAR,THREEYEAR

/;

