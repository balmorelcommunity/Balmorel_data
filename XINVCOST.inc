* -----------------------------------------------------
* XLS2GMS 2.8      24.7.1 r56632 Released Mar 14, 2016 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       36(Sheet49)
* Range:       $A$1:$S$39
* -----------------------------------------------------
* PARAMETER XINVCOST contains information about the investment cost                                                                                                                                            
* in new electrical transmission capacity between pairs of regions.                                                                                                                                            
* Units: EUR90/MW.                                                                                                                                                                                             
* Temporarily no new transmission investments are allowed                                                                                                                                                      
* Observe: if INF is entered in the table, this means that no tranmission                                                                                                                                      
* capacity can be established between the two associated regions.                                                                                                                                              
* The matrix should only have values in the lower half, as only those                                                                                                                                          
* values are used in the model.                                                                                                                                                                                
                                                                                                                                                                                                               
* Subsea cable NO-NE (half cost to Denmark)                                                    857142.857142857      Kurs NOK-> Euro                                                                           
*Subsea cable NO-GE                                                                            1071428.57142857      0.131639219                                                                               
* Subsea cable NO-DK                                                                           564168.081428571                                                                                                
TABLE XINVCOST(IRRRE,IRRRI)  'Investment cost in new transmission capacity (Money/MW)'                                                                                                                         
                                                                                                                                                                                                               
                                                                                               DK1              DK2  FIN             GER  NE   NO1  NO2  NO3  NO4  NO5  SE1  SE2  SE3  SE4  UK   EE   LV   LT  
DK1                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
DK2                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
FIN                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
GER                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
NE                                                                                             INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
NO1                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
NO2                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
NO3                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
NO4                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
NO5                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
SE1                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
SE2                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
SE3                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
SE4                                                                                            INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
UK                                                                                             INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
EE                                                                                             INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
LV                                                                                             INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
LT                                                                                             INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
PL                                                                                             INF              INF  INF             INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF  INF 
                                                                                                                                                                                                               
                                                                                                                                                                                                               
* I think this is a way of making the matrix symmetric, but we don't want to do that, I think…                                                                                                                 
* XINVCOST(IRRRE,IRRRI)$(ORD(IRRRE) LT ORD(IRRRI))=XINVCOST(IRRRI,IRRRE);                                                                                                                                      
                                                                                                                                                                                                               
* -----------------------------------------------------
