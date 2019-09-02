*Data can be improved.
PARAMETER SOLHFLH(AAA)  'Full load hours for solar heat (hours)'
* Average FLH from existing solar plants in Denmark. Assumed the same values for all countries except Germany and UK - Juan 30-05-2018
/
DK2_NoDH                                                                                                                                                               703
DK1_NoDH                                                                                                                                                               703

FinA                                                                                                                                                                   703
DE4-E_A                                                                                                                                                                1040
DE4-N_A                                                                                                                                                                1040
DE4-S_A                                                                                                                                                                1040
DE4-W_A                                                                                                                                                                1040
NL_A                                                                                                                                                                   1040
NO1_A1                                                                                                                                                                 703
NO2_A1                                                                                                                                                                 703
NO3_A1                                                                                                                                                                 703
NO4_A1                                                                                                                                                                 703
NO5_A1                                                                                                                                                                 703
SE1A                                                                                                                                                                   703
SE2A                                                                                                                                                                   703
SE3A                                                                                                                                                                   703
SE4A                                                                                                                                                                   703
UK_A                                                                                                                                                                   1040
EE_Rural                                                                                                                                                               703
LV_A                                                                                                                                                                   703
LT_A                                                                                                                                                                   703
/;

* Assign values to Nordic areas that have solar heat as an investment option
SOLHFLH(IA)$((RRRAAA('DK1',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('DK1_NoDH');
SOLHFLH(IA)$((RRRAAA('DK2',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('DK2_NoDH');
SOLHFLH(IA)$((RRRAAA('SE1',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('SE1A');
SOLHFLH(IA)$((RRRAAA('SE2',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('SE2A');
SOLHFLH(IA)$((RRRAAA('SE3',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('SE3A');
SOLHFLH(IA)$((RRRAAA('SE4',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('SE4A');
SOLHFLH(IA)$((RRRAAA('FIN',IA)) AND SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G))) = SOLHFLH('FInA');

* If SOLHFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as DK2_NoDH
SOLHFLH(IA)$((NOT SOLHFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLH), GKFX(Y,IA,G)))) = SOLHFLH('DK2_NoDH') ;

