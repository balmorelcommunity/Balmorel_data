*PARAMETER XHKFX(YYY,IAAAE,IAAAI)  "Initial heat transmission capacity between areas (MW)";
* SH, PHL and PHH industry areas are connected with their respective district heat area, for now unrestricted capacity since investment in transmission does not work yet.

TABLE XHKFX(YYY,IAAAE,IAAAI) 'Initial heat transmission capacicty between areas (MW)'

*XHKFX(YYY,'DK1_LARGE','DK1_Large_PHL') =  100;
*XHKFX(YYY,'DK1_PHL','DK1_Large') =  100;

$ifi not %INDUSTRY%==yes $goto noindustry
                                                                                                                                                                           DK1_Large DK1_Large_PHL DK1_Large_PHH DK2_Large DK2_Large_PHL DK2_Large_PHH DK1_NoDH_PHL DK1_NoDH_PHH DK2_NoDH_PHL DK2_NoDH_PHH
2016.DK1_Large                                                                                                                                                                       10000         10000
2016.DK1_Large_PHL                                                                                                                                                         10000                   10000
2016.DK1_Large_PHH                                                                                                                                                         10000     10000
2016.DK2_Large                                                                                                                                                                                                             10000         10000
2016.DK2_Large_PHL                                                                                                                                                                                               10000                   10000
2016.DK2_Large_PHH                                                                                                                                                                                               10000     10000
2016.DK1_NoDH_PHL                                                                                                                                                                                                                                                   10000
2016.DK1_NoDH_PHH                                                                                                                                                                                                                                      10000
2016.DK2_NoDH_PHL                                                                                                                                                                                                                                                                             10000
2016.DK2_NoDH_PHH                                                                                                                                                                                                                                                                10000
$label noindustry

;



* Transmission capacity YYY>2016 = Transmission capacity YYY=2016
XHKFX(YYY,IAAAE,IAAAI)$(YVALUE(YYY) ge 2016) = XHKFX('2016',IAAAE,IAAAI);
