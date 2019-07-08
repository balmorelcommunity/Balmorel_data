TABLE GOMVCOSTO(AAA,GGG)  'Variable operating and maintenance costs relative to output (money/MWh)'               
* Default values given by GDATA(G,'GOPMVCOST0')                                                                   
*                                                                                                   DK_E_Rural_WI 
* DK_E_Rural                                                                                        0             
;                                                                                                                 
*GOMVCOSTO(AAA,GGG)$(GOMVCOSTO(AAA,GGG) EQ 0)= GDATA(GGG,'GDOMVCOST0');                                           
