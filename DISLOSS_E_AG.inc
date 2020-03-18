PARAMETER DISLOSS_E_AG(AAA,GGG)  'Loss in electricity distribution associated to specific technology in a particular area'; 
*Source for offshore losses: https://www.sciencedirect.com/science/article/pii/S0378779605002609                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDTECHGROUP') EQ WINDTURBINE_OFFSHORE)=0.01;                                                   
*Offshore type 1                                                                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF1)=0.01;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF2)=0.01;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF3)=0.01;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF4)=0.01;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF5)=0.01;                                                            
*Offshore type 2                                                                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF1)=0.015;                                                           
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF2)=0.015;                                                           
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF3)=0.015;                                                           
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF4)=0.015;                                                           
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF5)=0.015;                                                           
*Offshore type 3                                                                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF1)=0.02;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF2)=0.02;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF3)=0.02;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF4)=0.02;                                                            
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF5)=0.02;                                                            
                                                                                                                            
                                                                                                                            
