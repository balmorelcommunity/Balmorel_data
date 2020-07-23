* PARAMETER XINVCOST contains information about the investment cost
* in new electrical transmission capacity between pairs of regions.
* Units: EUR2012/MW.
* Temporarily no new transmission investments are allowed
* Observe: if INF is entered in the table, this means that no tranmission
* capacity can be established between the two associated regions.
* The matrix should only have values in the lower half, as only those
* values are used in the model.

* Subsea cable NO-NE (half cost to Denmark)                                                    857142.857142857         Kurs NOK-> Euro
*Subsea cable NO-GE                                                                            1071428.57142857         0.131639219
* Subsea cable NO-DK                                                                           564168.081428571
$ifi %BB4%==yes $goto bb4invcost
TABLE XINVCOST(IRRRE,IRRRI)  'Investment cost in new transmission capacity (Money/MW)'

                                                                                               DK2              DK1     SE1             SE2    SE3    SE4    NO4    NO3    NO5    NO1    NO2     FIN    DE4-S  DE4-E  DE4-N   DE4-W  UK      EE     LV     LT     PL     NL     FR     BE
DK2                                                                                                             509574                                421379                                                          568371
DK1                                                                                            509574                                          774161                                    695800                       568371         1195600                             842800
SE1                                                                                                                                     568371               489975                              568371
SE2                                                                                                                     568371                 568371        538973 568371
SE3                                                                                                             774161                  568371        568371                      568371         793760                                      999600 999600
SE4                                                                                            421379                                          568371                                                                 725163                               989800 862400
NO4                                                                                                                     489975          538973                      568371                       568371
NO3                                                                                                                                     568371               568371        509574 568371
NO5                                                                                                                                                                 509574        519374 489975
NO1                                                                                                                                            568371               568371 519374        509574
NO2                                                                                                             695800                                                     489975 509574                              1185800        1215200
FIN                                                                                                                     568371                 793760        568371                                                                          676200
DE4-S                                                                                                                                                                                                          568371         568371                                     568371 568400 539000
DE4-E                                                                                                                                                                                                   568371        568371  568371                              568371
DE4-N                                                                                          568371           568371                                725163                             1185800               568371         568371
DE4-W                                                                                                                                                                                                   568371 568371 568371
UK                                                                                                              1195600                                                                  1215200                                                                         872200 735000 401800
EE                                                                                                                                             999600                                            676200                                             450800
LV                                                                                                                                             999600                                                                                        450800        450800
LT                                                                                                                                                    989800                                                                                        450800        568371
PL                                                                                                                                                    862400                                                   568371                                      568371
NL                                                                                                              842800                                                                                  568371                       872200                                            450800
FR                                                                                                                                                                                                      568400                       735000                                            568400
BE                                                                                                                                                                                                      539000                       401800                              450800 568400
;

* I think this is a way of making the matrix symmetric, but we don't want to do that, I think…
* XINVCOST(IRRRE,IRRRI)$(ORD(IRRRE) LT ORD(IRRRI))=XINVCOST(IRRRI,IRRRE);

$goto endxinvcost
$label  bb4invcost

TABLE XINVCOST(YYY,IRRRE,IRRRI)  'Investment cost in new transmission capacity (Money/MW)'

              DK2              DK1     SE1             SE2    SE3    SE4    NO4    NO3    NO5    NO1    NO2     FIN    DE4-S  DE4-E  DE4-N   DE4-W  UK      EE     LV     LT     PL     NL      FR     BE
2050.DK2                       509574                                421379                                                          568371
2050.DK1      509574                                          774161                                    695800                       568371         1195600                             842800
2050.SE1                                               568371               489975                              568371
2050.SE2                               568371                 568371        538973 568371
2050.SE3                       774161                  568371        568371                      568371         793760                                      999600 999600
2050.SE4      421379                                          568371                                                                 725163                               989800 862400
2050.NO4                               489975          538973                      568371                       568371
2050.NO3                                               568371               568371        509574 568371
2050.NO5                                                                           509574        519374 489975
2050.NO1                                                      568371               568371 519374        509574
2050.NO2                       695800                                                     489975 509574                              1185800        1215200                             1185800
2050.FIN                               568371                 793760        568371                                                                          676200
2050.DE4-S                                                                                                                    568371         568371                                     568371  568400 539000
2050.DE4-E                                                                                                             568371        568371  568371                              568371
2050.DE4-N    568371           568371                                725163                             1185800               568371         568371
2050.DE4-W                                                                                                             568371 568371 568371
2050.UK                        1195600                                                                  1215200                                                                         872200  735000 401800
2050.EE                                                       999600                                            676200                                             450800
2050.LV                                                       999600                                                                                        450800        450800
2050.LT                                                              989800                                                                                        450800        568371
2050.PL                                                              862400                                                   568371                                      568371
2050.NL                        842800                                                                   1185800        568371                       872200                                             450800
2050.FR                                                                                                                568400                       735000                                             568400
2050.BE                                                                                                                539000                       401800                              450800  568400

*             DK2              DK1     SE1             SE2    SE3    SE4    NO4    NO3    NO5    NO1    NO2     FIN    DE4-S  DE4-E  DE4-N   DE4-W  UK      EE     LV     LT     PL     NL      FR     BE
2016.DK2                       509574
2016.DK1      509574
2016.SE1                                               568371
2016.SE2                               568371                 568371
2016.SE3                                               568371        568371
2016.SE4                                                      568371
2016.NO4                                                                           568371
2016.NO3                                                                    568371        509574 568371
2016.NO5                                                                           509574        519374 489975
2016.NO1                                                                           568371 519374        509574
2016.NO2                                                                                  489975 509574
2016.FIN
2016.DE4-S                                                                                                                    568371         568371
2016.DE4-E                                                                                                             568371        568371  568371
2016.DE4-N                                                                                                                    568371         568371
2016.DE4-W                                                                                                             568371 568371 568371
2016.UK
2016.EE
2016.LV
2016.LT
2016.PL
2016.NL
2016.FR
2016.BE

;
XINVCOST(YYY,IRRRE,IRRRI)$(YVALUE(YYY) LT 2050)=XINVCOST('2016',IRRRE,IRRRI);
XINVCOST('2040',IRRRE,IRRRI)=XINVCOST('2050',IRRRE,IRRRI);

$label  endxinvcost
