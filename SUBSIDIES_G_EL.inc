PARAMETER SUBSIDIES_G_EL(YYY,CCC,GGG) 'subsidy on electricity generation';

*** Main input format: per country and per fuel
TABLE SUBSIDIES_G_EL_IN(YYY,CCC,FFF) 'subsidy on electricity generation'
                                NUCLEAR                                                                                                         NATGAS COAL  LIGNITE FUELOIL LIGHTOIL SHALE PEAT LNG   ELECTRIC WIND SUN WOODCHIPS WOODPELLETS WOODWASTE MUNIWASTE
2015.DENMARK                                                                                                                                                                                                    10   10  5         5           5
2015.FINLAND
2015.GERMANY
2015.NORWAY
2015.POLAND
2015.SWEDEN
2015.ESTONIA
2015.LATVIA
2015.LITHUANIA
;

* Apply 2015 numbers to all years:
SUBSIDIES_G_EL_IN(Y,C,FFF)$(YVALUE(Y) ne 2015) = SUBSIDIES_G_EL_IN('2015',C,FFF);

* Assign values onto SUBSIDIES_G_EL
SUBSIDIES_G_EL(Y,C,IGE)$((SUM(IA$ICA(C,IA), GKFX(Y,IA,IGE)) > 0) OR SUM(IA$ICA(C,IA), AGKN(IA,IGE)))  = SUM(FFF$IGF(IGE,FFF), SUBSIDIES_G_EL_IN(Y,C,FFF));