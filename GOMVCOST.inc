TABLE GOMVCOST(AAA,GGG)  'Variable operating and maintenance costs (EUR90/MWh)'
* Default values given by GDATA(G,'GOPMVCOST0')
*                                                                               DK_E_Rural_WI
* DK_E_Rural                                                                    0
;
GOMVCOST(AAA,GGG)$(GOMVCOST(AAA,GGG) EQ 0)= GDATA(GGG,'GDOMVCOST0');

* Scaling exercise: Hans 20191022
$ifi %OMVCOSTcheapToZero%==yes   GOMVCOST(AAA,GGG)$(GOMVCOST(AAA,GGG) lt 0.5)= 0.5;      !! For reasons unknown, GAMSCHK does not reach to value 0; it does react to value EPS. 