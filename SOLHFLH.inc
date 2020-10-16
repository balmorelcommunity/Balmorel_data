PARAMETER SOLHFLH(AAA)  'Full load hours for solar heat (hours)'
* Average FLH from existing solar plants in Denmark. Assumed the same values for all countries except Germany and UK - Juan 30-05-2018
/
HSTAN_A2                                                                                                                                                               703
WINDIA_A2                                                                                                                                                              703
/;
* If SOLHFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as HSTAN_A2
SOLHFLH(IA)$((NOT SOLHFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLH), GKFX(Y,IA,G)))) = SOLHFLH('HSTAN_A2') ;

