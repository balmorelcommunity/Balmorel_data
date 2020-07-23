PARAMETER STEPWISEPRICE_AMOUNT(YYY,CCC,STEPWISEPRICE_L,STEPWISEPRICE_FFF)           'Amount that can be bought in each line segment (GJ)'
*Given as percentages of GMIDF
/
2016                                .    DENMARK  .    L1   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L2   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L3   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L4   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L5   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L6   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L7   .    WOODCHIPS 0.25
2016                                .    DENMARK  .    L8   .    WOODCHIPS 15.75
/;
STEPWISEPRICE_AMOUNT(Y,C,STEPWISEPRICE_L,STEPWISEPRICE_FFF)=STEPWISEPRICE_GMIDF('2016',C,STEPWISEPRICE_FFF)*STEPWISEPRICE_AMOUNT('2016','DENMARK',STEPWISEPRICE_L,STEPWISEPRICE_FFF);

PARAMETER STEPWISEPRICE_AMOUNT_GLOB(YYY,STEPWISEPRICE_L,STEPWISEPRICE_FFF)
/
2016                                .   L1   .    WOODPELLETS 0.25
2016                                .   L2   .    WOODPELLETS 0.25
2016                                .   L3   .    WOODPELLETS 0.25
2016                                .   L4   .    WOODPELLETS 0.25
2016                                .   L5   .    WOODPELLETS 0.25
2016                                .   L6   .    WOODPELLETS 0.25
2016                                .   L7   .    WOODPELLETS 0.25
2016                                .   L8   .    WOODPELLETS 15.75
$ifi not %INDHEAT%==yes $goto noindheat
2016                                .    L1   .    IDVH_WOODPELLETS     0.25
2016                                .    L2   .    IDVH_WOODPELLETS     0.25
2016                                .    L3   .    IDVH_WOODPELLETS     0.25
2016                                .    L4   .    IDVH_WOODPELLETS     0.25
2016                                .    L5   .    IDVH_WOODPELLETS     0.25
2016                                .    L6   .    IDVH_WOODPELLETS     0.25
2016                                .    L7   .    IDVH_WOODPELLETS     0.25
2016                                .    L8   .    IDVH_WOODPELLETS     15.75
$label noindheat
/;
STEPWISEPRICE_AMOUNT_GLOB(Y,STEPWISEPRICE_L,STEPWISEPRICE_FFF)= STEPWISEPRICE_AMOUNT_GLOB('2016',STEPWISEPRICE_L,STEPWISEPRICE_FFF)*
(STEPWISEPRICE_GMIDF_GLOB('2016',STEPWISEPRICE_FFF) + SUM(C,STEPWISEPRICE_GMIDF('2016',C,STEPWISEPRICE_FFF)));
