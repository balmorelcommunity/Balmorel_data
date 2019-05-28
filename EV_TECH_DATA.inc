SET                        EVTECH                 EV technology data'
/
BEVCHCAP
PHEVCHCAP
CHEFF
BATTOVERS
LIFEFAC
BATTCOST
BATTDEGCYC
BATTDEGCALCO
BATTDEGCALFL
CHV2GCOST
/;


Parameter
EV_BEV_CHARGERCAP(YYY)
EV_PHEV_CHARGERCAP(YYY)
EV_PEFF(YYY)
EV_BATTOVERSIZED(YYY)
EV_LIFEFACTOR(YYY)
EV_BATTCOST(YYY)
EV_BATTDEGCYCLE(YYY)
EV_BATTDEGCALCONST(YYY)
EV_BATTDEGCALFLEX(YYY)
EV_CHARGERCOST(YYY)
;

TABLE                      EVTechData(YYY,EVTECH)                                Technology Data for EV'
*                          MW                     MW                  -          -                       -       EUR/MWh  -          -            -            EUR/CHARGERkW, 2020 is from the one paper where they build an internal (in the vehicle) bidirectional charger on their own. Does not need to be converted to MWh in qobj since its only multiplied by the amount of EV
                           BEVCHCAP               PHEVCHCAP           CHEFF      BATTOVERS               LIFEFAC BATTCOST BATTDEGCYC BATTDEGCALCO BATTDEGCALFL CHV2GCOST
2020                       0.01                   0.01                0.85       1.1                     0.25    175000   4E-005     6E-007       9E-007       220
2030                       0.01                   0.01                0.85       1.1                     0.25    140000   4E-005     6E-007       9E-007       59.66
2040                       0.015                  0.015               0.85       1.1                     0.25    105000   4E-005     6E-007       9E-007       57.53
2050                       0.02                   0.02                0.85       1.1                     0.25    70000    4E-005     6E-007       9E-007       60.06
;
EV_BEV_CHARGERCAP(YYY)                            =                   EVTechData (YYY,'BEVCHCAP'                 )        ;
EV_PHEV_CHARGERCAP(YYY)                           =                   EVTechData (YYY,'PHEVCHCAP'                )        ;
EV_PEFF(YYY)                                      =                   EVTechData (YYY,'CHEFF'                    )        ;
EV_BATTOVERSIZED(YYY)                             =                   EVTechData (YYY,'BATTOVERS'                )        ;
EV_LIFEFACTOR(YYY)                                =                   EVTechData (YYY,'LIFEFAC'                  )        ;
EV_BATTCOST(YYY)                                  =                   EVTechData (YYY,'BATTCOST'                 )        ;
EV_BATTDEGCYCLE(YYY)                              =                   EVTechData (YYY,'BATTDEGCYC'               )        ;
EV_BATTDEGCALCONST(YYY)                           =                   EVTechData (YYY,'BATTDEGCALCO'             )        ;
EV_BATTDEGCALFLEX(YYY)                            =                   EVTechData (YYY,'BATTDEGCALFL'             )        ;
EV_CHARGERCOST(YYY)                               =                   EVTechData (YYY,'CHV2GCOST'                )        ;
