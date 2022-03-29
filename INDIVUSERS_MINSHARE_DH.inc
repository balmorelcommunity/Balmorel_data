PARAMETER INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,INDIVUSERS_GROUP) 'Minimum share of heat demand in an individual user group (-)';                                           
                                                                                                                                                                            
*Using known 2016 as a base.                                                                                                                                                
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,INDIVUSERS_GROUP) = INDIVHEATING_GROUP_DHSHARE('2016',DHUSER,RRR,INDIVUSERS_GROUP);                                                   
                                                                                                                                                                            
*Assume 3% each year change new heating system. 30% every 10 years. Source: BDEW2014                                                                                        
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,INDIVUSERS_GROUP)$(YVALUE(YYY) GT 2016)= INDIVUSERS_MINSHARE_DH('2016',RRR,DHUSER,INDIVUSERS_GROUP)*(1-0.03)**(YVALUE(YYY)-2016);     
                                                                                                                                                                            
*Fossil fuel based technologies are exceptions, coal and oil from 2030, gas from 2040, or if stated in GMAXF                                                                
$ifi %GMAXF_DOL%==CCCRRRAAA_FFF     INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_COAL')$(SUM(C$CCCRRR(C,RRR),GMAXF(C,'COAL')) OR GMAXF(RRR,'COAL'))=0;               
$ifi %GMAXF_DOL%==YYY_CCCRRRAAA_FFF INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_COAL')$(SUM(C$CCCRRR(C,RRR),GMAXF(YYY,C,'COAL')) OR GMAXF(YYY,RRR,'COAL'))=0;       
$ifi %GMAXF_DOL%==CCCRRRAAA_FFF     INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_COAL')$(SUM(C$CCCRRR(C,RRR),GMAXF(C,'COAL')) OR GMAXF(RRR,'COAL'))=0;               
$ifi %GMAXF_DOL%==YYY_CCCRRRAAA_FFF INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_COAL')$(SUM(C$CCCRRR(C,RRR),GMAXF(YYY,C,'COAL')) OR GMAXF(YYY,RRR,'COAL'))=0;       
$ifi %GMAXF_DOL%==CCCRRRAAA_FFF     INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_OIL')$(SUM(C$CCCRRR(C,RRR),GMAXF(C,'LIGHTOIL')) OR GMAXF(RRR,'LIGHTOIL'))=0;        
$ifi %GMAXF_DOL%==YYY_CCCRRRAAA_FFF INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_OIL')$(SUM(C$CCCRRR(C,RRR),GMAXF(YYY,C,'LIGHTOIL')) OR GMAXF(YYY,RRR,'LIGHTOIL'))=0;
$ifi %GMAXF_DOL%==CCCRRRAAA_FFF     INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_OIL')$(SUM(C$CCCRRR(C,RRR),GMAXF(C,'LIGHTOIL')) OR GMAXF(RRR,'LIGHTOIL'))=0;        
$ifi %GMAXF_DOL%==YYY_CCCRRRAAA_FFF INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_OIL')$(SUM(C$CCCRRR(C,RRR),GMAXF(YYY,C,'LIGHTOIL')) OR GMAXF(YYY,RRR,'LIGHTOIL'))=0;
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_COAL')$( YVALUE(YYY) GE 2030) = 0;                                                                                      
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_OIL')$( YVALUE(YYY) GE 2030) = 0;                                                                                       
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_RES_BO_GAS')$( YVALUE(YYY) GE 2040) = 0;                                                                                       
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_COAL')$( YVALUE(YYY) GE 2030) = 0;                                                                                      
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_OIL')$( YVALUE(YYY) GE 2030) = 0;                                                                                       
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,'INDIV_TER_BO_GAS')$( YVALUE(YYY) GE 2040) = 0;                                                                                       
                                                                                                                                                                            
*Assume negelectable if the min share is less than 0.5%                                                                                                                     
INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,INDIVUSERS_GROUP)$(INDIVUSERS_MINSHARE_DH(YYY,RRR,DHUSER,INDIVUSERS_GROUP) LT 0.005) =0;                                              
