PARAMETER HYDROGEN_DH2(YYY,CCCRRRAAA)  'Yearly demand for hydrogen at a Regional level(MWh of H2)'
* No exogenous demand defined yet
$ontext
/
2020                                                                                               .    DK1  11303.5
2025                                                                                               .    DK1  12434
2030                                                                                               .    DK1  1273452
2035                                                                                               .    DK1  2667381
2040                                                                                               .    DK1  3475905
2045                                                                                               .    DK1  3595028.5
2050                                                                                               .    DK1  3852743.5
2020                                                                                               .    DK2  11303.5
2025                                                                                               .    DK2  12434
2030                                                                                               .    DK2  1273452
2035                                                                                               .    DK2  2667381
2040                                                                                               .    DK2  3475905
2045                                                                                               .    DK2  3595028.5
2050                                                                                               .    DK2  3852743.5
/;
$offtext
;
*HYDROGEN_DH2(YYY,AAA)=0;
*HYDROGEN_DH2(YYY,RRR)=0;

$ontext
*Base scenario from Hydrogen roadmap europe 2019
HYDROGEN_DH2('2030','BE')=        643809.727        ;
HYDROGEN_DH2('2030','DE4-E')=        638648.4976        ;
HYDROGEN_DH2('2030','DE4-N')=        196507.23        ;
HYDROGEN_DH2('2030','DE4-S')=        1728370.41        ;
HYDROGEN_DH2('2030','DE4-W')=        1902547.273        ;
HYDROGEN_DH2('2030','DK1')=        192711.1093        ;
HYDROGEN_DH2('2030','DK2')=        132258.4515        ;
HYDROGEN_DH2('2030','EE')=        77929.27937        ;
HYDROGEN_DH2('2030','FIN')=        581042.0467        ;
HYDROGEN_DH2('2030','FR')=        4374411.607        ;
HYDROGEN_DH2('2030','LT')=        105528.3021        ;
HYDROGEN_DH2('2030','LV')=        68718.44047        ;
HYDROGEN_DH2('2030','NL')=        991945.9432        ;
HYDROGEN_DH2('2030','NO1')=        347247.686        ;
HYDROGEN_DH2('2030','NO2')=        221752.5374        ;
HYDROGEN_DH2('2030','NO3')=        148742.0068        ;
HYDROGEN_DH2('2030','NO4')=        113310.7744        ;
HYDROGEN_DH2('2030','No5')=        94820.52102        ;
HYDROGEN_DH2('2030','PL')=        1314481.61        ;
HYDROGEN_DH2('2030','SE1')=        52322.41703        ;
HYDROGEN_DH2('2030','SE2')=        101310.1369        ;
HYDROGEN_DH2('2030','SE3')=        722577.1028        ;
HYDROGEN_DH2('2030','SE4')=        213002.7451        ;
HYDROGEN_DH2('2030','UK')=        3036004.146        ;
*Rough assumptions on future growth.
HYDROGEN_DH2('2040',IR) = HYDROGEN_DH2('2030',IR)*1.3;
HYDROGEN_DH2('2050',IR) = HYDROGEN_DH2('2030',IR)*1.6;
$offtext
$ontext
*Ambitious scenario from Hydrogen roadmap europe 2019
HYDROGEN_DH2('2030','BE')=        4348774.675        ;
HYDROGEN_DH2('2030','DE4-E')=        4313911.854        ;
HYDROGEN_DH2('2030','DE4-N')=        1327357.493        ;
HYDROGEN_DH2('2030','DE4-S')=        11674712.5        ;
HYDROGEN_DH2('2030','DE4-W')=        12851233.91        ;
HYDROGEN_DH2('2030','DK1')=        1301715.641        ;
HYDROGEN_DH2('2030','DK2')=        893372.9648        ;
HYDROGEN_DH2('2030','EE')=        526392.9113        ;
HYDROGEN_DH2('2030','FIN')=        3924794.597        ;
HYDROGEN_DH2('2030','FR')=        29548063.07        ;
HYDROGEN_DH2('2030','LT')=        712817.4496        ;
HYDROGEN_DH2('2030','LV')=        464175.9841        ;
HYDROGEN_DH2('2030','NL')=        6700348.28        ;
HYDROGEN_DH2('2030','NO1')=        2345571.804        ;
HYDROGEN_DH2('2030','NO2')=        1497883.269        ;
HYDROGEN_DH2('2030','NO3')=        1004715.284        ;
HYDROGEN_DH2('2030','NO4')=        765386.1154        ;
HYDROGEN_DH2('2030','No5')=        640489.0501        ;
HYDROGEN_DH2('2030','PL')=        8878996.534        ;
HYDROGEN_DH2('2030','SE1')=        353424.9213        ;
HYDROGEN_DH2('2030','SE2')=        684324.7926        ;
HYDROGEN_DH2('2030','SE3')=        4880828.72        ;
HYDROGEN_DH2('2030','SE4')=        1438780.598        ;
HYDROGEN_DH2('2030','UK')=        20507453.35        ;

$offtext




TABLE HYDROGEN_DH3(CCCRRRAAA,YYY)
*BASELINE
$ifi not %MARIASCENARIO%==BASELINE $GOTO H2BASELINEEND
                    2030         2050
BE                  126729       1805891
DE4-E               114907       1637429
DE4-N               35356        503824
DE4-S               310973       4431363
DE4-W               342311       4877935
DK1                 36497        520078
DK2                 24331        346719
EE                  11546        164527
FIN                 59766        851659
FR                  649143       9250292
LT                  28670        408547
LV                  15392        219337
NL                  152696       2175911
NO1                 28348        403955
NO2                 16638        237094
NO3                 8809         125534
NO4                 6027         85883
NO5                 7273         103639
PL                  302903       4316373
SE1                 4513         64316
SE2                 9279         132219
SE3                 67525        962232
SE4                 20727        295357
UK                  594172       8466944
;
$LABEL H2BASELINEEND

$ifi not %MARIASCENARIO%==TECH $GOTO H2TECHEND
*TECH
                   2030        2050
BE                 126729      58597178
DE4-E              114907      52506885
DE4-N              35356       16155965
DE4-S              310973      142099052
DE4-W              342311      156419111
DK1                36497       13815520
DK2                24331       9210347
EE                 11546       4401357
FIN                59766       35887850
FR                 649143      252425844
LT                 28670       10593289
LV                 15392       5905739
NL                 152696      65937794
NO1                28348       13960232
NO2                16638       8193708
NO3                8809        4338332
NO4                6027        2968028
NO5                7273        3581646
PL                 302903      128871771
SE1                4513        2209206
SE2                9279        4541652
SE3                67525       33052099
SE4                20727       10145322
UK                 594172      218843724
;
$LABEL H2TECHEND

$ifi not %MARIASCENARIO%==LIFE $GOTO H2LIFEEND
*Life

                  2030        2050
BE                126729      47057467
DE4-E             114907      41715708
DE4-N             35356       12835602
DE4-S             310973      112894958
DE4-W             342311      124271969
DK1               36497       10536661
DK2               24331       7024441
EE                11546       3402136
FIN               59766       28192844
FR                649143      194940622
LT                28670       8160052
LV                15392       4508062
NL                152696      53034073
NO1               28348       11525889
NO2               16638       6764914
NO3               8809        3581827
NO4               6027        2450472
NO5               7273        2957089
PL                302903      100576204
SE1               4513        1810109
SE2               9279        3721195
SE3               67525       27081185
SE4               20727       8312553
UK                594172      166449972
;
$LABEL H2LIFEEND
;

HYDROGEN_DH2(YYY,CCCRRRAAA)= HYDROGEN_DH3(CCCRRRAAA,YYY);

HYDROGEN_DH2('2049',CCCRRRAAA) = HYDROGEN_DH2('2050',CCCRRRAAA) ;