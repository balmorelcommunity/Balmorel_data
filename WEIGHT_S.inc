* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       20(Sheet27)
* Range:       $A$1:$A$7
* -----------------------------------------------------
* PARAMETER WEIGHT_S reflects how much of the year each season represents    
* expressed relatively between the seasons.                                  
* Units: (none).                                                             
* One way of doing it is to state the number of days in each season          
* (should sum up to 365). Another is to give percentages (summing up to 100).
PARAMETER WEIGHT_S(SSS)  'Weight of each season';                            
WEIGHT_S(SSS)=168;                                                           
* -----------------------------------------------------
