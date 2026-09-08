PARAMETER DISLOSS_E_AG(AAA,GGG)  'Loss in electricity distribution associated to specific technology in a particular area';                                                                      
*Source for offshore losses: https://www.sciencedirect.com/science/article/pii/S0378779605002609                                                                                                 
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDTECHGROUP') EQ WINDTURBINE_OFFSHORE AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                               
*Offshore type 1 (COMMENTED OUT BECAUSE IT IS THE SAME ASSUMPTION AS THE GENERIC ONE)                                                                                                            
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF1¨AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF4 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG1_OFF5 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.01;                                                                                       
*Offshore type 2                                                                                                                                                                                 
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF4 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG2_OFF5 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
*Offshore type 3                                                                                                                                                                                 
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF1 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF2 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF3 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF4 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
DISLOSS_E_AG(IA,G)$(GDATA(G,'GDSUBTECHGROUP') EQ RG3_OFF5 AND (AGKN(IA,G) OR SUM(Y, GKFX(Y,IA,G))))=0.02;                                                                                        
*Offshore hub connected type 1                                                                                                                                                                   
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2020')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2030')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2040')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-30M_Y-2050')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2020')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2030')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2040')))=0.01;                  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG1_SD-20M_Y-2050')))=0.01;                  
*Offshore hub connected type 2                                                                                                                                                                   
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2020')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2030')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2040')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-30M_Y-2050')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2020')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2030')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2040')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_SD-20M_Y-2050')))=0.0125;                
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2020')))=0.011;  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2030')))=0.011;  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2040')))=0.011;  
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG2_6-GW_SD-20M_Y-2050')))=0.011;  
*Offshore hub connected type 3                                                                                                                                                                   
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2020')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2030')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2040')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-30M_Y-2050')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2020')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2020') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2020')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2030')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2030') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2030')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2040')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2040') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2040')))=0.015;                 
DISLOSS_E_AG(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2050')$(AGKN(IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2050') OR SUM(Y, GKFX(Y,IA,'GNR_WT_WIND_OFF_HUB_RG3_SD-20M_Y-2050')))=0.015;                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
