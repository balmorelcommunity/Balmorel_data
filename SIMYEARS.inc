* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       14_1(Sheet15)
* Range:       $A$4:$A$75
* -----------------------------------------------------
SET  Y(YYY) "Years in the simulation"                               
/                                                                   
$ifi %BB4%%==yes 2012, 2020, 2030                                   
$ifi not %BB4%%==yes 2012                                           
/;                                                                  
                                                                    
SET C(CCC)  'Countries in the simulation'                           
/                                                                   
NORWAY                                                              
DENMARK                                                             
FINLAND                                                             
GERMANY                                                             
NETHERLANDS                                                         
SWEDEN                                                              
UNITED_KINGDOM                                                      
ESTONIA                                                             
LATVIA                                                              
LITHUANIA                                                           
POLAND                                                              
/;                                                                  
                                                                    
                                                                    
SET SCENARIO     'All scenarios (one only:  /sc1*sc1/)'   /sc1*sc1/;
* To be used with:                                                  
* SET SCENARSIM(SCENARIO) 'Scenarios in simulation' /sc1/ ;         
* ALIAS(SCENARSIM,SC);                                              
                                                                    
*SET SCENARIO     'All scenarios'   /sc1*sc100/;                    
SET SCENARSIM(SCENARIO) 'Scenarios in simulation' /sc1/ ;           
ALIAS(SCENARSIM,SC);                                                
                                                                    
                                                                    
SET T(TTT)  'Time periods within a season in the simulation'        
/                                                                   
* For BB1 and BB2                                                   
$ontext                                                             
$ifi not %bb3%==yes                                                 
$ifi not %timeaggr%==yes                                            
                                                                    
$ifi not %bb3%==yes                                                 
$ifi not %timeaggr%==yes                                            
$offtext                                                            
$ifi %timeaggr%==yes T001*T005                                      
* For BB3                                                           
$ifi %bb3%==yes                                                     
                                                                    
/;                                                                  
                                                                    
                                                                    
SET S(SSS)  'Seasons in the simulation'                             
/                                                                   
                                                                    
* For BB1 and BB2                                                   
$ifi not %bb3%==yes                                                 
S01*s02                                                             
*                                                                   
* For BB3                                                           
* NB! IMPORTANT TO SPECIFY THE SEASON YOU WANT TO LOOK AT HERE!!!   
$ifi not %bb3%==yes $goto label_BB3_SEASONS_END                     
s01*s02                                                             
*                                                                   
*                                                                   
                                                                    
$label label_BB3_SEASONS_END                                        
/;                                                                  
                                                                    
                                                                    
                                                                    
                                                                    
                                                                    
                                                                    
                                                                    
* -----------------------------------------------------
