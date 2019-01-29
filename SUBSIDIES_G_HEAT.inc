PARAMETER SUBSIDIES_G_HEAT(YYY,CCC,GGG) 'subsidy on heat generation';
*This does not exist in DK

*** Main input format: per country and per fuel
TABLE SUBSIDIES_G_HEAT_IN(YYY,CCC,FFF) 'subsidy on heat generation'
             NUCLEAR                                      NATGAS COAL  LIGNITE FUELOIL          LIGHTOIL SHALE PEAT  LNG   ELECTRIC BIOGAS
2015.FINLAND
2018.FINLAND
2015.DENMARK
2015.SWEDEN
;

* Apply 2015 numbers to all years:
SUBSIDIES_G_HEAT_IN(Y,C,FFF)$(YVALUE(Y) NE 2015) = SUBSIDIES_G_HEAT_IN('2015',C,FFF);

* Assign values onto SUBSIDIES_G_HEAT
SUBSIDIES_G_HEAT(Y,C,IGH)$((SUM(IA$ICA(C,IA), GKFX(Y,IA,IGH)) > 0) OR SUM(IA$ICA(C,IA), AGKN(IA,IGH)))  = SUM(FFF$IGF(IGH,FFF), SUBSIDIES_G_HEAT_IN(Y,C,FFF));