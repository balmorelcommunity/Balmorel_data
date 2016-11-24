* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       14_1(Sheet15)
* Range:       $A$4:$A$8
* -----------------------------------------------------
SET  Y(YYY) "Years in the simulation"
/                                    
$ifi %BB4%%==yes 2012, 2020, 2030    
$ifi not %BB4%%==yes 2012            
/;                                   
* -----------------------------------------------------
