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
EV_DISTLOSSLOAD(RRR)
EV_DISTLOSSUNLOAD(RRR)
;

TABLE                      EVTechData(YYY,EVTECH)                                Technology Data for EV'
*                          MW                     MW                  -          -                       -            EUR/MWh  -          -            -            -
                           BEVCHCAP               PHEVCHCAP           CHEFF      BATTOVERS               LIFEFAC      BATTCOST BATTDEGCYC BATTDEGCALCO BATTDEGCALFL CHV2GCOST
2030                       0.01                   0.01                0.85       1.1                     0.25         140000   4E-005     6E-007       9E-007       59.66
2040                       0.015                  0.015               0.85       1.1                     0.25         105000   4E-005     6E-007       9E-007       57.53
2050                       0.02                   0.02                0.85       1.1                     0.25         70000    4E-005     6E-007       9E-007       60.06
;
EV_BEV_CHARGERCAP(YYY)                            =                   EVTechData (YYY,'BEVCHCAP')        ;
EV_PHEV_CHARGERCAP(YYY)                           =                   EVTechData (YYY,'PHEVCHCAP')        ;
EV_PEFF(YYY)                                      =                   EVTechData (YYY,'CHEFF')        ;
EV_BATTOVERSIZED(YYY)                             =                   EVTechData (YYY,'BATTOVERS')        ;
EV_LIFEFACTOR(YYY)                                =                   EVTechData (YYY,'LIFEFAC')        ;
EV_BATTCOST(YYY)                                  =                   EVTechData (YYY,'BATTCOST')        ;
EV_BATTDEGCYCLE(YYY)                              =                   EVTechData (YYY,'BATTDEGCYC')        ;
EV_BATTDEGCALCONST(YYY)                           =                   EVTechData (YYY,'BATTDEGCALCO')        ;
EV_BATTDEGCALFLEX(YYY)                            =                   EVTechData (YYY,'BATTDEGCALFL')        ;
EV_CHARGERCOST(YYY)                               =                   EVTechData (YYY,'CHV2GCOST')        ;

EV_BEV_CHARGERCAP(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_BEV_CHARGERCAP('2030');
EV_PHEV_CHARGERCAP(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_PHEV_CHARGERCAP('2030');
EV_PEFF(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_PEFF('2030');
EV_BATTOVERSIZED(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_BATTOVERSIZED('2030');
EV_LIFEFACTOR(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_LIFEFACTOR('2030');
EV_BATTCOST(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_BATTCOST('2030');
EV_BATTDEGCYCLE(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_BATTDEGCYCLE('2030');
EV_BATTDEGCALCONST(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_BATTDEGCALCONST('2030');
EV_BATTDEGCALFLEX(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_BATTDEGCALFLEX('2030');
EV_CHARGERCOST(Y)$(Y.val LT 2030 AND Y.val GE 2020)=EV_CHARGERCOST('2030');

EV_BEV_CHARGERCAP(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_BEV_CHARGERCAP('2040');
EV_PHEV_CHARGERCAP(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_PHEV_CHARGERCAP('2040');
EV_PEFF(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_PEFF('2040');
EV_BATTOVERSIZED(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_BATTOVERSIZED('2040');
EV_LIFEFACTOR(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_LIFEFACTOR('2040');
EV_BATTCOST(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_BATTCOST('2040');
EV_BATTDEGCYCLE(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_BATTDEGCYCLE('2040');
EV_BATTDEGCALCONST(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_BATTDEGCALCONST('2040');
EV_BATTDEGCALFLEX(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_BATTDEGCALFLEX('2040');
EV_CHARGERCOST(Y)$(Y.val LT 2040 AND Y.val GT 2030)=EV_CHARGERCOST('2040');

EV_BEV_CHARGERCAP(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_BEV_CHARGERCAP('2050');
EV_PHEV_CHARGERCAP(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_PHEV_CHARGERCAP('2050');
EV_PEFF(Y)$(Y.val LT 2050 AND Y.val GT 2030)=EV_PEFF('2040');
EV_BATTOVERSIZED(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_BATTOVERSIZED('2050');
EV_LIFEFACTOR(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_LIFEFACTOR('2050');
EV_BATTCOST(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_BATTCOST('2050');
EV_BATTDEGCYCLE(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_BATTDEGCYCLE('2050');
EV_BATTDEGCALCONST(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_BATTDEGCALCONST('2050');
EV_BATTDEGCALFLEX(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_BATTDEGCALFLEX('2050');
EV_CHARGERCOST(Y)$(Y.val LT 2050 AND Y.val GT 2040)=EV_CHARGERCOST('2050');

*Assumption: losses in the distribution network only occur when charging EVs
EV_DISTLOSSLOAD(IR)=DISLOSS_E(IR);
EV_DISTLOSSUNLOAD(IR)=0;

