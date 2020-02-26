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

*$ontext
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