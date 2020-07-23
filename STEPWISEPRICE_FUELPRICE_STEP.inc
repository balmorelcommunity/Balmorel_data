PARAMETER STEPWISEPRICE_FUELPRICE_STEP(YYY,CCC,STEPWISEPRICE_L,STEPWISEPRICE_FFF) 'Fuel price in each line segment for each fuel (EURO/GJ)'
*The following is given as percentage of FUELPRICE assuming the fuelprice in segment L3 Used below to convert to EURO/GJ
/
2016                     .    DENMARK  .    L1   .    WOODCHIPS 0.67
2016                     .    DENMARK  .    L2   .    WOODCHIPS 0.766
2016                     .    DENMARK  .    L3   .    WOODCHIPS 0.875
2016                     .    DENMARK  .    L4   .    WOODCHIPS 1
2016                     .    DENMARK  .    L5   .    WOODCHIPS 1.125
2016                     .    DENMARK  .    L6   .    WOODCHIPS 1.266
2016                     .    DENMARK  .    L7   .    WOODCHIPS 1.424
2016                     .    DENMARK  .    L8   .    WOODCHIPS 14.238

$ifi not %INDHEAT%==yes $goto noindheat
2016                     .    DENMARK  .    L1   .    IDVH_WOODPELLETS 0.67
2016                     .    DENMARK  .    L2   .    IDVH_WOODPELLETS 0.766
2016                     .    DENMARK  .    L3   .    IDVH_WOODPELLETS 0.875
2016                     .    DENMARK  .    L4   .    IDVH_WOODPELLETS 1
2016                     .    DENMARK  .    L5   .    IDVH_WOODPELLETS 1.125
2016                     .    DENMARK  .    L6   .    IDVH_WOODPELLETS 1.266
2016                     .    DENMARK  .    L7   .    IDVH_WOODPELLETS 1.424
2016                     .    DENMARK  .    L8   .    IDVH_WOODPELLETS 14.238
$label noindheat

2016                     .    DENMARK  .    L1   .    WOODPELLETS 0.67
2016                     .    DENMARK  .    L2   .    WOODPELLETS 0.766
2016                     .    DENMARK  .    L3   .    WOODPELLETS 0.875
2016                     .    DENMARK  .    L4   .    WOODPELLETS 1
2016                     .    DENMARK  .    L5   .    WOODPELLETS 1.125
2016                     .    DENMARK  .    L6   .    WOODPELLETS 1.266
2016                     .    DENMARK  .    L7   .    WOODPELLETS 1.424
2016                     .    DENMARK  .    L8   .    WOODPELLETS 14.238
/;
STEPWISEPRICE_FUELPRICE_STEP(Y,C,STEPWISEPRICE_L,STEPWISEPRICE_FFF)$(STEPWISEPRICE_GMIDF(Y,C,STEPWISEPRICE_FFF)>0 OR STEPWISEPRICE_GMIDF_GLOB(Y,STEPWISEPRICE_FFF)>0)
=STEPWISEPRICE_FUELPRICE_STEP('2016','DENMARK',STEPWISEPRICE_L,STEPWISEPRICE_FFF)*SUM(IA$ICA(C,IA),FUELPRICE(Y,IA,STEPWISEPRICE_FFF))*1/SUM(IA$(ICA(C,IA) AND FUELPRICE(Y,IA,STEPWISEPRICE_FFF) ),1);
