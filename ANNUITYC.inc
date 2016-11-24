* -----------------------------------------------------
* XLS2GMS 2.8      24.7.1 r56632 Released Mar 14, 2016 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       21(Sheet28)
* Range:       $A$6:$C$25
* -----------------------------------------------------
PARAMETER ANNUITYC(CCC) 'Transforms investment to annual payment (fraction)'       
* Thus, for instance, an investment of 100, paid over 20 years,                    
* at the end of the year assuming an interest rate of 5%,                          
* will imply an annual payment of 8.02,                                            
* hence, ANNUITYC should in this case have the value 0.0802.                       
* Unit: (none).                                                                    
* The present value 0.094 corressponds to 20 years and 7%                          
/                                                                                  
GERMANY                                                                      0.094 
DENMARK                                                                      0.094 
FINLAND                                                                      0.094 
NETHERLANDS                                                                  0.094 
NORWAY                                                                       0.094 
SWEDEN                                                                       0.094 
UNITED_KINGDOM                                                               0.094 
ESTONIA                                                                      0.094 
LATVIA                                                                       0.094 
LITHUANIA                                                                    0.094 
POLAND                                                                       0.094 
/;                                                                                 
* -----------------------------------------------------
