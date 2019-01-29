PARAMETER SUBSIDIES_F_HEAT(YYY,CCC,GGG) 'fuel subsidy for heat generation';
*This does not exist in DK

*** Main input format: per country and per fuel
TABLE SUBSIDIES_F_HEAT_IN(YYY,CCC,FFF) 'fuel use in HEAT_IN generation'
                                                                                                    NUCLEAR                                                                         NATGAS  COAL  LIGNITE FUELOIL          LIGHTOIL SHALE PEAT LNG     ELECTRIC
2015.NORWAY
2015.DENMARK
2015.FINLAND
2018.FINLAND
2015.SWEDEN
2015.ESTONIA
2015.LATVIA
2015.LITHUANIA
2015.GERMANY
;

* Apply subsidy to countries outside main model area
SUBSIDIES_F_HEAT_IN(Y,C,FFF)$(C('NETHERLANDS') OR C('UNITED_KINGDOM') OR C('POLAND')) = SUBSIDIES_F_HEAT_IN(Y,'GERMANY',FFF);

* Apply 2015 numbers to all years:
SUBSIDIES_F_HEAT_IN(Y,C,FFF)$(YVALUE(Y) ne 2015) = SUBSIDIES_F_HEAT_IN('2015',C,FFF);

* Assign values onto SUBSIDIES_F_HEAT
SUBSIDIES_F_HEAT(Y,C,IGH)$((SUM(IA$ICA(C,IA), GKFX(Y,IA,IGH)) > 0) OR SUM(IA$ICA(C,IA), AGKN(IA,IGH))) = SUM(FFF$IGF(IGH,FFF), SUBSIDIES_F_HEAT_IN(Y,C,FFF));