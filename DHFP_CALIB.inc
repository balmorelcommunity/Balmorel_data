* -----------------------------------------------------
* XLS2GMS 2.8      24.7.1 r56632 Released Mar 14, 2016 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       21(Sheet28)
* Range:       $A$38:$D$44
* -----------------------------------------------------
TABLE DHFP_CALIB(AAA,SSS,TTT)   'Calibrate the price side of heat demand (EUR90/MWh)'                                                                  
* PARAMETER DHFP_CALIB is used to calibrate the price side of the demand function in order to get demand consistent for a base year.                   
                                                                                                                                     T001         T002 
DK1_Large.S01                                                                                                                        0            0    
;                                                                                                                                                      
* Default data: all identical                                                                                                                          
DHFP_CALIB(AAA,S,T)=DHFP_CALIB('DK1_Large','S01','T001')  ;                                                                                            
* -----------------------------------------------------
