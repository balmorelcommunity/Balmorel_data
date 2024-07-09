TABLE GOMVCOSTIN(AAA,GGG)  'Variable operating and maintenance costs relative to input(money/MWh)'               
* Default values given by GDATA(G,'GOPMVCOSTIN')                                                                 
*                                                                                                  DK_E_Rural_WI 
* DK_E_Rural                                                                                       0             
;                                                                                                                
*GOMVCOSTIN(AAA,GGG)$(GOMVCOSTIN(AAA,GGG) EQ 0)= GDATA(GGG,'GDOMVCOSTIN');                                       
