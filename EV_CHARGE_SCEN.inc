SET                        EVSCEN                 EV technology data'
/
DUMB
SMART
V2G
/;


Parameter
EV_DUMB_SCEN(YYY)
EV_SMART_SCEN(YYY)
EV_V2G_SCEN(YYY)

;

TABLE                      EVScenData(YYY,EVSCEN)                                Technology Data for EV'
*                          -                      -                   -
                           DUMB                   SMART               V2G
2030                       1                      0                   0
2040                       0                      1                   0
2050                       0                      0                   1
;
EV_DUMB_SCEN(YYY)                            =                   EVScenData (YYY,'DUMB')        ;
EV_SMART_SCEN(YYY)                           =                   EVScenData (YYY,'SMART')        ;
EV_V2G_SCEN(YYY)                                      =                   EVScenData (YYY,'V2G')        ;

