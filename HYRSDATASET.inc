* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       09(Sheet12)
* Range:       $A$13:$A$20
* -----------------------------------------------------
SET HYRSDATASET  'Characteristics of hydro reservoirs'                                               
* AGT: added one more constraint - maximum hydro production                                          
/                                                                                                    
HYRSMINVOL   'Minimum reservoir filling (MWh weekly production/MW total capacity)'                   
HYRSMAXVOL   'Maximum reservoir filling at start of season (MWh weekly production/MW total capacity)'
HYRSDGMIN    'Minimum hydro production (MWh weekly production/MW total capacity)'                    
HYRSDGMAX    'Maximum hydro production (MWh weekly production/MW total capacity)'                    
/;                                                                                                   
* -----------------------------------------------------
