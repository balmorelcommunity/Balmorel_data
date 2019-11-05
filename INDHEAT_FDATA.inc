
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

FUELPRICE(Y,INDHEAT_AAA,'IDVH_WOODPELLETS')= FUELPRICE(Y,'DK1_large','WOODPELLETS');
FUELPRICE(Y,INDHEAT_AAA,'IDVH_WOOD')= FUELPRICE(Y,'DK1_large','WOOD');
FUELPRICE(Y,INDHEAT_AAA,'IDVH_COAL')= FUELPRICE(Y,'DK1_large','COAL');

*Source:                                                                                                                             eurostat, energy exclude taxes and levies eurostat, energy exclude taxes and levies EC working document
TABLE FUELPRICE2(YYY,CCC,FFF,SECTOR) "unit: EUR2012/GJ"
                                                                                                                                     IDVH_NATGAS.RES                           IDVH_NATGAS.TER                           IDVH_LIGHTOIL.RES   IDVH_LIGHTOIL.TER
2017                                                                                                             .    Norway         17.3537218073841                          15.2263187484989                          11.5033931325427    11.5033931325427
2017                                                                                                             .    Sweden         17.3537218073841                          15.2263187484989                          11.5033931325427    11.5033931325427
2017                                                                                                             .    Finland        11.3461496473876                          11.3461496473876                          11.7430471561373    11.7430471561373
2017                                                                                                             .    Denmark        10.4898364664527                          9.11170744088557                          13.8999333684891    13.8999333684891
2017                                                                                                             .    Estonia        8.24201436649855                          7.65329905460579                          11.5033931325427    11.5033931325427
2017                                                                                                             .    Latvia         8.06807575162114                          8.58989159625336                          12.4620092269212    12.4620092269212
2017                                                                                                             .    Lithuania      7.92089692364796                          8.17511489923801                          11.263739108948     11.263739108948
2017                                                                                                             .    Poland         9.3257857361193                           9.25888626885876                          11.982701179732     11.982701179732
2017                                                                                                             .    Germany        12.135563361062                           10.4630766795485                          10.5447770381641    10.5447770381641
2017                                                                                                             .    France         13.379893452108                           11.2391104997707                          11.982701179732     11.982701179732
2017                                                                                                             .    United_Kingdom 11.7074067705945                          11.8144459182114                          10.0654689909748    10.0654689909748
2017                                                                                                             .    Netherlands    10.1018195563416                          9.33916562957141                          8.14823680221773    8.14823680221773
2017                                                                                                             .    Belgium        11.3729094342918                          10.4363168926443                          10.7844310617588    10.7844310617588
;

*2017 prices apply to all modelled years.
FUELPRICE(Y,INDHEAT_AAA,FFF)$(FUELPRICE(Y,INDHEAT_AAA,FFF) EQ 0) =
SUM(SECTOR, SUM(C, FUELPRICE2('2017',C,FFF,SECTOR)*ICA(C,INDHEAT_AAA))*INDHEAT_AAAINSECTOR(INDHEAT_AAA,SECTOR));

$ifi not %taxes%==yes $goto endtaxes
PARAMETER INDHEAT_TAX_F(YYY,INDHEAT_AAA,INDHEAT_GGG);
TABLE INDHEAT_TAX_F_IN(YYY,CCC,FFF,SECTOR) 'tax on fuel use, unit: EUR2012/GJ'
                                                                                                                                     IDVH_NATGAS.RES                           IDVH_NATGAS.TER                           IDVH_LIGHTOIL.RES   IDVH_LIGHTOIL.TER
2017                                                                                                             .    Norway         7.66667894805791                          2.30134167376258                          5.03273449548742    5.03273449548742
2017                                                                                                             .    Sweden         7.66667894805791                          2.30134167376258                          5.03273449548742    5.03273449548742
2017                                                                                                             .    Finland        4.4956441999083                           4.4956441999083                           4.79308047189278    4.79308047189278
2017                                                                                                             .    Denmark        8.38919319447174                          7.26528214449466                          4.07411840110886    4.07411840110886
2017                                                                                                             .    Estonia        1.01687190236021                          1.01687190236021                          2.87584828313567    2.87584828313567
2017                                                                                                             .    Latvia         0.441536483919563                         0.428156590467456                         0.958616094378556   0.958616094378556
2017                                                                                                             .    Lithuania      0.495056057727996                         1.03025179581232                          0.239654023594639   0.239654023594639
2017                                                                                                             .    Poland         0.0133798934521084                        0.160558721425294                         1.1982701179732     1.1982701179732
2017                                                                                                             .    Germany        1.59220732080085                          1.08377136962075                          1.43792414156783    1.43792414156783
2017                                                                                                             .    France         1.95346444400777                          1.68586657496561                          2.63619425954103    2.63619425954103
2017                                                                                                             .    United_Kingdom 0.388016910111133                         0.41477669701535                          2.63619425954103    2.63619425954103
2017                                                                                                             .    Netherlands    7.35894139865942                          7.35894139865942                          11.982701179732     11.982701179732
2017                                                                                                             .    Belgium        0.508435951180105                         0.53519573808432                          0.479308047189278   0.479308047189278
;

* Apply 2017 numbers to all years:
INDHEAT_TAX_F_IN(YYY,C,FFF,SECTOR)$(YVALUE(YYY) ne 2017) = INDHEAT_TAX_F_IN('2017',C,FFF,SECTOR);
$label endtaxes

