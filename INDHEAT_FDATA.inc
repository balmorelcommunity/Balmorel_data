
FDATA('IDVH_LIGHTOIL',FDATASET)= FDATA('LIGHTOIL',FDATASET);
FDATA('IDVH_NATGAS',FDATASET)= FDATA('NATGAS',FDATASET);
FDATA('IDVH_WOODPELLETS',FDATASET)= FDATA('WOODPELLETS',FDATASET);
FDATA('IDVH_WOOD',FDATASET)= FDATA('WOOD',FDATASET);
FDATA('IDVH_COAL',FDATASET)= FDATA('COAL',FDATASET);

FDATA('IDVH_LIGHTOIL','FDACRONYM') = IDVH_LIGHTOIL;
FDATA('IDVH_NATGAS','FDACRONYM') = IDVH_NATGAS;
FDATA('IDVH_WOODPELLETS','FDACRONYM') = IDVH_WOODPELLETS;
FDATA('IDVH_WOOD','FDACRONYM') = IDVH_WOOD;
FDATA('IDVH_COAL','FDACRONYM') = IDVH_COAL;

FUELPRICE(YYY,INDHEAT_AAA,FFF)=0;

FUELPRICE(Y,INDHEAT_AAA,'IDVH_WOOD')= FUELPRICE(Y,'DK1_large','WOOD');
FUELPRICE(Y,INDHEAT_AAA,'IDVH_COAL')= FUELPRICE(Y,'DK1_large','COAL');

*Source:       eurostat, energy exclude taxes and levies eurostat, energy exclude taxes and levies EC working document                         european bioenergy outlook 2017, bagged wood pellet prices excl. VAT
TABLE FUELPRICE_IDVH1(CCC,FFF,SECTOR) "unit: EUR2012/GJ"
               IDVH_NATGAS.RES    IDVH_NATGAS.TER      IDVH_LIGHTOIL.RES        IDVH_LIGHTOIL.TER             IDVH_WOODPELLETS.RES          IDVH_WOODPELLETS.TER
Norway         10.52521842        4.817267605          11.5033931325427         11.5033931325427              11.47781                      11.47781
Sweden         10.52521842        4.817267605          11.5033931325427         11.5033931325427              11.47781                      11.47781
Finland        5.684467462        5.684467462          11.7430471561373         11.7430471561373              11.22101                      11.22101
Denmark        5.442055677        4.614431345          13.8999333684891         13.8999333684891              11.47781                      11.47781
Estonia        6.568882204        5.532620945          11.5033931325427         11.5033931325427              11.81159                      11.81159
Latvia         5.898998616        5.719552147          12.4620092269212         12.4620092269212              12.99275                      12.99275
Lithuania      6.183137786        4.602081536          11.263739108948          11.263739108948               7.685326                      7.685326
Poland         7.121442605        6.506852481          11.982701179732          11.982701179732               7.620489                      7.620489
Germany        7.241385448        4.771610735          10.5447770381641         10.5447770381641              16.01161                      16.01161
France         8.880916174        5.799825906          11.982701179732          11.982701179732               15.65217                      15.65217
United_Kingdom 8.984486164        5.197117796          10.0654689909748         10.0654689909748              16.52174                      16.52174
Netherlands    8.801016651        5.061550573          8.14823680221773         8.14823680221773              13.60126                      13.60126
Belgium        7.504099571        4.903716269          10.7844310617588         10.7844310617588              16.34783                      16.34783

;

PARAMETER FUELPRICE_IDVH_PREMIUM(CCC,FFF,SECTOR);
FUELPRICE_IDVH_PREMIUM(C,'IDVH_NATGAS',SECTOR)$FUELPRICE_IDVH1(C,'IDVH_NATGAS',SECTOR)=FUELPRICE_IDVH1(C,'IDVH_NATGAS',SECTOR)-FUELPRICE('2019','DK1_large','NATGAS')    ;          !!price reference year is 2019
FUELPRICE_IDVH_PREMIUM(C,'IDVH_LIGHTOIL',SECTOR)$FUELPRICE_IDVH1(C,'IDVH_LIGHTOIL',SECTOR)=FUELPRICE_IDVH1(C,'IDVH_LIGHTOIL',SECTOR)-FUELPRICE('2017','DK1_large','LIGHTOIL')    ;      !!price reference year is 2017
FUELPRICE_IDVH_PREMIUM(C,'IDVH_WOODPELLETS',SECTOR)$FUELPRICE_IDVH1(C,'IDVH_WOODPELLETS',SECTOR)=FUELPRICE_IDVH1(C,'IDVH_WOODPELLETS',SECTOR)-FUELPRICE1('2017','DK1','WOODPELLETS')    ;      !!price reference year is 2017

PARAMETER FUELPRICE_IDVH(Y,CCC,FFF,SECTOR);
FUELPRICE_IDVH(Y,C,'IDVH_NATGAS',SECTOR)$FUELPRICE_IDVH1(C,'IDVH_NATGAS',SECTOR)= FUELPRICE_IDVH_PREMIUM(C,'IDVH_NATGAS',SECTOR)+ FUELPRICE(Y,'DK1_large','NATGAS');
FUELPRICE_IDVH(Y,C,'IDVH_LIGHTOIL',SECTOR)$FUELPRICE_IDVH1(C,'IDVH_LIGHTOIL',SECTOR)= FUELPRICE_IDVH_PREMIUM(C,'IDVH_LIGHTOIL',SECTOR)+ FUELPRICE(Y,'DK1_large','LIGHTOIL');
FUELPRICE_IDVH(Y,C,'IDVH_WOODPELLETS',SECTOR)$FUELPRICE_IDVH1(C,'IDVH_WOODPELLETS',SECTOR)= FUELPRICE_IDVH_PREMIUM(C,'IDVH_WOODPELLETS',SECTOR)+ FUELPRICE1(Y,'DK1','WOODPELLETS');

FUELPRICE(Y,INDHEAT_AAA,FFF)$(FUELPRICE(Y,INDHEAT_AAA,FFF) EQ 0) =
SUM(SECTOR, SUM(C, FUELPRICE_IDVH(Y,C,FFF,SECTOR)*ICA(C,INDHEAT_AAA))*INDHEAT_AAAINSECTOR(INDHEAT_AAA,SECTOR));

$ifi not %taxes%==yes $goto endtaxes
PARAMETER INDHEAT_TAX_F(YYY,INDHEAT_AAA,INDHEAT_GGG);
TABLE INDHEAT_TAX_F_IN(YYY,CCC,FFF,SECTOR) 'tax on fuel use, unit: EUR2012/GJ'
                    IDVH_NATGAS.RES             IDVH_NATGAS.TER           IDVH_LIGHTOIL.RES           IDVH_LIGHTOIL.TER
2017.Norway                                                               5.03273449548742            5.03273449548742
2017.Sweden                                                               5.03273449548742            5.03273449548742
2017.Finland                                                              4.79308047189278            4.79308047189278
2017.Denmark                                                              4.07411840110886            4.07411840110886
2017.Estonia                                                              2.87584828313567            2.87584828313567
2017.Latvia                                                               0.958616094378556           0.958616094378556
2017.Lithuania                                                            0.239654023594639           0.239654023594639
2017.Poland                                                               1.1982701179732             1.1982701179732
2017.Germany                                                              1.43792414156783            1.43792414156783
2017.France                                                               2.63619425954103            2.63619425954103
2017.United_Kingdom                                                       2.63619425954103            2.63619425954103
2017.Netherlands                                                          11.982701179732             11.982701179732
2017.Belgium                                                              0.479308047189278           0.479308047189278
*                   IDVH_NATGAS.RES             IDVH_NATGAS.TER
2019.Norway         6.848062739                 6.734107681
2019.Sweden         6.848062739                 6.734107681
2019.Finland        4.840938073                 4.840938073
2019.Denmark        8.066109447                 7.764661832
2019.Estonia        1.569174237                 1.428741937
2019.Latvia         0.441692796                 0.359360735
2019.Lithuania      1.216456202                 1.216081966
2019.Poland         0.132011975                 0.245686355
2019.Germany        1.639904962                 1.477860496
2019.France         2.895936689                 1.319090601
2019.United_Kingdom 0.671380534                 0.409789122
2019.Netherlands    9.191813263                 2.61507209
2019.Belgium        0.531790267                 0.290594752
;
* Apply  to all years:
INDHEAT_TAX_F_IN(Y,C,FFF,SECTOR)$(NOT INDHEAT_TAX_F_IN(Y,C,FFF,SECTOR)) = SUM(YYY,INDHEAT_TAX_F_IN(YYY,C,FFF,SECTOR));

$label endtaxes

