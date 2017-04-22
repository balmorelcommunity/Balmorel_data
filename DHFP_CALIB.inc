TABLE DHFP_CALIB(AAA,SSS,TTT)   'Calibrate the price side of heat demand (EUR90/MWh)'                                                                  
* PARAMETER DHFP_CALIB is used to calibrate the price side of the demand function in order to get demand consistent for a base year.                   
                                                                                                                                     T001         T002 
DK1_Large.S01                                                                                                                        0            0    
;                                                                                                                                                      
* Default data: all identical                                                                                                                          
DHFP_CALIB(AAA,S,T)=DHFP_CALIB('DK1_Large','S01','T001')  ;                                                                                            
