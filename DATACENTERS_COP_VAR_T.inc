* DATACENTERS COP_VAR_T(AAA,G,SSS,TTT)                                                                                                                                     
* Required (and loaded only) if SEASONALCOP add-on is used. All technologies with 'GDTECHGROUP' = HEATPUMP                                                                 
                                                                                                                                                                           
COP_VAR_T(IA,G,SSS,TTT)$((SUM(YYY,GKFX(YYY,IA,G)) OR AGKN(IA,G)) AND  GDATA(G,'GDTECHGROUP') EQ HEATPUMP AND GDATA(G,'GDSUBTECHGROUP') EQ DC_ABSCHILLER )=GDATA(G,'GDFE'); 
COP_VAR_T(IA,G,SSS,TTT)$((SUM(YYY,GKFX(YYY,IA,G)) OR AGKN(IA,G)) AND  GDATA(G,'GDTECHGROUP') EQ HEATPUMP AND GDATA(G,'GDSUBTECHGROUP') EQ DC_ELECCHILLER )=GDATA(G,'GDFE');
COP_VAR_T(IA,G,SSS,TTT)$((SUM(YYY,GKFX(YYY,IA,G)) OR AGKN(IA,G)) AND  GDATA(G,'GDTECHGROUP') EQ HEATPUMP AND GDATA(G,'GDSUBTECHGROUP') EQ DC_HEATPUMP)=GDATA(G,'GDFE');    
COP_VAR_T(IA,G,SSS,TTT)$((SUM(YYY,GKFX(YYY,IA,G)) OR AGKN(IA,G)) AND  GDATA(G,'GDTECHGROUP') EQ HEATPUMP AND GDATA(G,'GDSUBTECHGROUP') EQ DC_FREECOOLING)=GDATA(G,'GDFE'); 
