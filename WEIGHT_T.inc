* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       20(Sheet27)
* Range:       $A$9:$A$16
* -----------------------------------------------------
* PARAMETER WEIGHT_T reflects how much of the day each time period represents 
* expressed relatively between the time periods.                              
* Units: (none).                                                              
* Like above one way of doing it is to state the number of hours of a day that
* each period represents (sums up to 24).                                     
* Alternatively it can be stated in percentage (summing up to 100).           
 WEIGHT_T(TTT)=1;                                                             
$ifi %bb3%==yes WEIGHT_T(T)=1;                                                
* -----------------------------------------------------
