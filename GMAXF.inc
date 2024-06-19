TABLE GMAXF(YYY,CCCRRRAAA,FFF)  'Maximum fuel use (GJ) per year'                                                                                                                                 
                                                                        STRAW         WOOD      WOODWASTE BIOGAS        OTHERGAS   RETORTGAS SHALE COAL PEAT NATGAS WOODCHIPS    WOODPELLETS     
2016.DENMARK                                                            93804303.9755 211677970 5588136   40193869.5249                                             2893492767.2 731390134.831333
2016.NORWAY                                                             24307096.2685 69586937  18357256  18125130.7649 12999.9996                                  926707467.7  296049468.369   
;                                                                                                                                                                                                
GMAXF(Y,CCCRRRAAA,'STRAW')=GMAXF('2016',CCCRRRAAA,'STRAW');                                                                                                                                      
GMAXF(Y,CCCRRRAAA,'WOOD')=GMAXF('2016',CCCRRRAAA,'WOOD');                                                                                                                                        
GMAXF(Y,CCCRRRAAA,'WOODWASTE')=GMAXF('2016',CCCRRRAAA,'WOODWASTE');                                                                                                                              
GMAXF(Y,CCCRRRAAA,'BIOGAS')=GMAXF('2016',CCCRRRAAA,'BIOGAS');                                                                                                                                    
GMAXF(Y,CCCRRRAAA,'OTHERGAS')=GMAXF('2016',CCCRRRAAA,'OTHERGAS');                                                                                                                                
GMAXF(Y,CCCRRRAAA,'COAL')=GMAXF('2016',CCCRRRAAA,'COAL');                                                                                                                                        
GMAXF(Y,CCCRRRAAA,'WOODCHIPS')=GMAXF('2016',CCCRRRAAA,'WOODCHIPS');                                                                                                                              
GMAXF(Y,CCCRRRAAA,'WOODPELLETS')=GMAXF('2016',CCCRRRAAA,'WOODPELLETS');                                                                                                                          
                                                                                                                                                                                                 
*Removing not needed data if stepwiseprice addon is activated                                                                                                                                    
$ifi %STEPWISEPRICE%==yes GMAXF(Y,CCCRRRAAA,STEPWISEPRICE_FFF)=0;                                                                                                                                
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
                                                                                                                                                                                                 
