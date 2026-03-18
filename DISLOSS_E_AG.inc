PARAMETER DISLOSS_E_AG(AAA,GGG)  'Loss in electricity distribution associated to specific technology in a particular area'; 
*Source for offshore losses: https://www.sciencedirect.com/science/article/pii/S0378779605002609                                                                                                 
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDTECHGROUP') EQ WINDTURBINE_OFFSHORE AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                               
*Offshore type 1 (COMMENTED OUT BECAUSE IT IS THE SAME ASSUMPTION AS THE GENERIC ONE)                                                                                                            
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*Offshore type 2                                                                                                                                                                                 
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
*Offshore type 3                                                                                                                                                                                 
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
                                                                                                                                                                                               
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
