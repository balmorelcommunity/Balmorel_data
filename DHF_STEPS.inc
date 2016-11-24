* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       47(Sheet57)
* Range:       $A$1:$B$25
* -----------------------------------------------------
* PARAMETER DHF_STEPS describes the elastic electricity demands                                                                         
* in relative terms, by quantifying the steps. Compare PARAMETER DEF_STEPS.                                                             
* Unit: (none).                                                                                                                         
* Find out what happens here!                                                                                                           
                                                                                                                                        
PARAMETER DHF_STEPS(AAA,SSS,TTT,DF_QP,DHF)  'Elastic heat demands'                                                                      
;                                                                                                                                       
                                                                                                                                        
                                                                                                                                        
TABLE DHF_STEPS                                                                                                                         
* do we need this?                                                                                                                      
$ontext                                                                                                                                 
                                                                                                                                DHF_DINF
DK2A.S01.T001.DF_QUANT                                                                                                          -INF    
DK2A.S01.T001.DF_PRICE                                                                                                          10000   
DK1A.S01.T001.DF_QUANT                                                                                                          -INF    
DK1A.S01.T001.DF_PRICE                                                                                                          10000   
$offtext                                                                                                                                
;                                                                                                                                       
                                                                                                                                        
* Not sure wheter or not this should be included…                                                                                       
$ontext                                                                                                                                 
DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_U1)$(DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_U) EQ 0) = DHF_STEPS('Denmark1A','S01','T001',DF_QP,DHF_U) ;         
DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_D1)$(DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_D) EQ 0) = DHF_STEPS('Denmark1A','S01','T001',DF_QP,DHF_D) ;         
$offtext                                                                                                                                
* -----------------------------------------------------
