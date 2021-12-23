* -----------------------------------------------------
* XLS2GMS 2.8      24.4.5 r52258 Released May 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     16.0
* Workbook:    https://eduumb-my.sharepoint.com/personal/jon_gustav_kirkerud_nmbu_no/Documents/Documents/DATA/Balmoreldokumenter/Vannkraft/Input to balmorel new.xlsx
* Sheet:       HDSETS
* Range:       $A$1:$A$177
* -----------------------------------------------------
SET GGG 'All hydropower cascading technologies'                                       
/                                                                                     
AGG-NO1_WTR1                                                                          
AGG-NO1_WTR4                                                                          
AGG-NO1_WTR5                                                                          
AGG-NO1_WTR6                                                                          
AGG-NO1_WTR7                                                                          
AGG-NO1_WTR8                                                                          
AGG-NO1_WTR9                                                                          
AGG-NO2_WTR1                                                                          
AGG-NO2_WTR2                                                                          
AGG-NO2_WTR3                                                                          
AGG-NO2_WTR4                                                                          
AGG-NO2_WTR5                                                                          
AGG-NO2_WTR6                                                                          
AGG-NO2_WTR7                                                                          
AGG-NO2_WTR8                                                                          
AGG-NO2_WTR9                                                                          
AGG-NO2_WTR10                                                                         
AGG-NO2_WTR11                                                                         
AGG-NO2_WTR12                                                                         
AGG-NO2_WTR13                                                                         
AGG-NO2_WTR14                                                                         
AGG-NO2_WTR15                                                                         
AGG-NO3_WTR1                                                                          
AGG-NO3_WTR2                                                                          
AGG-NO3_WTR3                                                                          
AGG-NO3_WTR5                                                                          
AGG-NO3_WTR6                                                                          
AGG-NO3_WTR7                                                                          
AGG-NO3_WTR8                                                                          
AGG-NO3_WTR9                                                                          
AGG-NO3_WTR13                                                                         
AGG-NO3_WTR14                                                                         
AGG-NO3_WTR15                                                                         
AGG-NO4_WTR1                                                                          
AGG-NO4_WTR2                                                                          
AGG-NO4_WTR3                                                                          
AGG-NO4_WTR4                                                                          
AGG-NO4_WTR5                                                                          
AGG-NO4_WTR6                                                                          
AGG-NO4_WTR7                                                                          
AGG-NO4_WTR8                                                                          
AGG-NO4_WTR9                                                                          
AGG-NO5_WTR1                                                                          
AGG-NO5_WTR2                                                                          
AGG-NO5_WTR3                                                                          
AGG-NO5_WTR4                                                                          
AGG-NO5_WTR5                                                                          
AGG-NO5_WTR6                                                                          
AGG-NO5_WTR7                                                                          
AGG-NO5_WTR8                                                                          
AGG-NO5_WTR9                                                                          
AGG-NO5_WTR10                                                                         
AGG-NO5_WTR11                                                                         
AGG-NO5_WTR12                                                                         
AGG-NO5_WTR13                                                                         
AGG-NO5_WTR14                                                                         
AGG-NO5_WTR15                                                                         
AGG-SE1_WTR1                                                                          
AGG-SE1_WTR2                                                                          
AGG-SE1_WTR3                                                                          
AGG-SE2_WTR1                                                                          
AGG-SE2_WTR2                                                                          
AGG-SE2_WTR3                                                                          
AGG-SE2_WTR4                                                                          
AGG-SE2_WTR5                                                                          
AGG-SE2_WTR6                                                                          
AGG-SE2_WTR7                                                                          
AGG-SE2_WTR8                                                                          
AGG-SE3_WTR1                                                                          
AGG-SE3_WTR2                                                                          
AGG-SE3_WTR3                                                                          
AGG-SE3_WTR4                                                                          
AGG-SE4_WTR1                                                                          
AGG-FIN_WTR1                                                                          
/;                                                                                    
                                                                                      
SET G 'All hydropower cascading technologies'                                         
/                                                                                     
AGG-NO1_WTR1                                                                          
AGG-NO1_WTR4                                                                          
AGG-NO1_WTR5                                                                          
AGG-NO1_WTR6                                                                          
AGG-NO1_WTR7                                                                          
AGG-NO1_WTR8                                                                          
AGG-NO1_WTR9                                                                          
AGG-NO2_WTR1                                                                          
AGG-NO2_WTR2                                                                          
AGG-NO2_WTR3                                                                          
AGG-NO2_WTR4                                                                          
AGG-NO2_WTR5                                                                          
AGG-NO2_WTR6                                                                          
AGG-NO2_WTR7                                                                          
AGG-NO2_WTR8                                                                          
AGG-NO2_WTR9                                                                          
AGG-NO2_WTR10                                                                         
AGG-NO2_WTR11                                                                         
AGG-NO2_WTR12                                                                         
AGG-NO2_WTR13                                                                         
AGG-NO2_WTR14                                                                         
AGG-NO2_WTR15                                                                         
AGG-NO3_WTR1                                                                          
AGG-NO3_WTR2                                                                          
AGG-NO3_WTR3                                                                          
AGG-NO3_WTR5                                                                          
AGG-NO3_WTR6                                                                          
AGG-NO3_WTR7                                                                          
AGG-NO3_WTR8                                                                          
AGG-NO3_WTR9                                                                          
AGG-NO3_WTR13                                                                         
AGG-NO3_WTR14                                                                         
AGG-NO3_WTR15                                                                         
AGG-NO4_WTR1                                                                          
AGG-NO4_WTR2                                                                          
AGG-NO4_WTR3                                                                          
AGG-NO4_WTR4                                                                          
AGG-NO4_WTR5                                                                          
AGG-NO4_WTR6                                                                          
AGG-NO4_WTR7                                                                          
AGG-NO4_WTR8                                                                          
AGG-NO4_WTR9                                                                          
AGG-NO5_WTR1                                                                          
AGG-NO5_WTR2                                                                          
AGG-NO5_WTR3                                                                          
AGG-NO5_WTR4                                                                          
AGG-NO5_WTR5                                                                          
AGG-NO5_WTR6                                                                          
AGG-NO5_WTR7                                                                          
AGG-NO5_WTR8                                                                          
AGG-NO5_WTR9                                                                          
AGG-NO5_WTR10                                                                         
AGG-NO5_WTR11                                                                         
AGG-NO5_WTR12                                                                         
AGG-NO5_WTR13                                                                         
AGG-NO5_WTR14                                                                         
AGG-NO5_WTR15                                                                         
AGG-SE1_WTR1                                                                          
AGG-SE1_WTR2                                                                          
AGG-SE1_WTR3                                                                          
AGG-SE2_WTR1                                                                          
AGG-SE2_WTR2                                                                          
AGG-SE2_WTR3                                                                          
AGG-SE2_WTR4                                                                          
AGG-SE2_WTR5                                                                          
AGG-SE2_WTR6                                                                          
AGG-SE2_WTR7                                                                          
AGG-SE2_WTR8                                                                          
AGG-SE3_WTR1                                                                          
AGG-SE3_WTR2                                                                          
AGG-SE3_WTR3                                                                          
AGG-SE3_WTR4                                                                          
AGG-SE4_WTR1                                                                          
AGG-FIN_WTR1                                                                          
/;                                                                                    
                                                                                      
                                                                                      
SET HDATASET                                                                          
/                                                                                     
HDTYPE                                                                                
HDRESERVOIR                                                                           
HDINFLOW                                                                              
HDINFLOWUREG                                                                          
HDINFLOWUPSTREAM                                                                      
HDFIXED                                                                               
HDGKRATEBASE                                                                          
HDPUMPPOWER                                                                           
HDPUMPEFF                                                                             
HDRESCHANGE                                                                           
/;                                                                                    
                                                                                      
                                                                                      
SET WYYY 'Weather year' /2004*2018/;                                                  
                                                                                      
SET HSEG 'segment of hydropower capacity' /1*4/;                                      
                                                                                      
SET HYDROCAS_CCC(CCC) 'countries with hydro cascading' /NORWAY,SWEDEN,FINLAND/;       
* -----------------------------------------------------
