* -----------------------------------------------------
* XLS2GMS 2.8      24.7.1 r56632 Released Mar 14, 2016 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       30(Sheet42)
* Range:       $A$12:$C$17
* -----------------------------------------------------
TABLE GOMVCOST(AAA,GGG)  'Variable operating and maintenance costs (EUR90/MWh)'               
* Default values given by GDATA(G,'GOPMVCOST0')                                               
*                                                                               DK_E_Rural_WI 
* DK_E_Rural                                                                    0             
;                                                                                             
GOMVCOST(AAA,GGG)$(GOMVCOST(AAA,GGG) EQ 0)= GDATA(GGG,'GDOMVCOST0');                          
* -----------------------------------------------------
