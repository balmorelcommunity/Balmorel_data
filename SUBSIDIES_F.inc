PARAMETER SUBSIDIES_F(YYY,CCC,GGG) 'subsidy on fuel use';
*This does not exist in DK


*** Main input format: per country and per fuel
TABLE SUBSIDIES_F_IN(YYY,CCC,FFF) 'subsidy on fuel use'
             NUCLEAR                                      NATGAS COAL LIGNITE FUELOIL LIGHTOIL SHALE PEAT LNG ELECTRIC
2015.DENMARK
;

* Apply 2015 numbers to all years:
SUBSIDIES_F_IN(YYY,C,FFF)$(YVALUE(YYY) ne 2015) = SUBSIDIES_F_IN('2015',C,FFF);

* Assign values onto SUBSIDIES_F
SUBSIDIES_F(Y,C,G)$((SUM(IA$ICA(C,IA), GKFX(Y,IA,G)) > 0) OR SUM(IA$ICA(C,IA), AGKN(IA,G))) = SUM(FFF$IGF(G,FFF), SUBSIDIES_F_IN(Y,C,FFF));