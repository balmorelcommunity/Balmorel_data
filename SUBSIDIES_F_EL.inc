PARAMETER SUBSIDIES_F_EL(YYY,CCC,GGG) 'fuel subsidy for electricity generation';
*This does not exist in DK

*** Main input format: per country and per fuel
TABLE SUBSIDIES_F_EL_IN(YYY,CCC,FFF) 'fuel subsidy for electricity generation'
                                                NUCLEAR                                                                                                                       NATGAS  COAL    LIGNITE FUELOIL LIGHTOIL SHALE     PEAT    LNG  ELECTRIC
2015.NORWAY
2015.DENMARK
2015.FINLAND
2015.SWEDEN
2015.ESTONIA
2015.LATVIA
2015.LITHUANIA
;
* Apply 2015 numbers to all years:
SUBSIDIES_F_EL_IN(Y,C,FFF)$(YVALUE(Y) NE 2015) = SUBSIDIES_F_EL_IN('2015',C,FFF);

* Assign values onto SUBSIDIES_F_EL
SUBSIDIES_F_EL(Y,C,G)$((SUM(IA$ICA(C,IA), GKFX(Y,IA,G)) > 0) OR SUM(IA$ICA(C,IA), AGKN(IA,G)))  = SUM(FFF$IGF(G,FFF), SUBSIDIES_F_EL_IN(Y,C,FFF));