* -----------------------------------------------------
* XLS2GMS 2.8      24.7.1 r56632 Released Mar 14, 2016 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       31_1(Sheet43)
* Range:       $A$16:$BI$23
* -----------------------------------------------------
PARAMETER XKRATE  "Transmission capacity rating (share; non-negative, typically close to 1; default/1/, use eps for 0)";                                                                                                                                                                                                                                                                            
TABLE XKRATE(IRRRE,IRRRI,SSS)                                                                                                                                                                                                                                                                                                                                                                       
* Transmission capacity rating (fraction)                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                            S01  S02  S03  S04  S05  S06  S07  S08  S09  S10  S11  S12  S13  S14  S15  S16  S17  S18  S19  S20  S21  S22  S23  S24  S25  S26  S27  S28  S29  S30  S31  S32  S33  S34  S35  S36  S37  S38  S39  S40  S41  S42  S43  S44  S45  S46  S47  S48  S49  S50  S51  S52      
*GER.NE                                                                                                                     0.71 0.9  0.8  0.98 0.99 0.99 0.82 0.78 0.95 0.98 0.97 1    0.84 0.99 0.99 1    1    1    0.98 1    1    1    1    0.95 0.91 0.9  0.87 0.88 0.92 0.94 0.91 1    0.88 0.96 0.99 1    0.97 1    0.96 0.89 0.97 0.88 0.93 0.8  0.87 1    0.96 0.87 0.9  0.89 0.97 0.8      
*NE.GER                                                                                                                     0.73 0.88 0.84 0.98 0.98 0.99 0.88 0.82 0.99 0.98 0.99 1    0.87 0.97 0.95 0.97 0.97 1    0.93 0.97 0.98 0.96 0.97 0.97 0.93 0.96 1    0.96 0.93 0.98 0.97 0.99 0.96 0.94 0.99 1    0.97 0.99 0.96 0.92 0.97 0.95 0.97 0.9  0.91 1    0.97 0.95 0.93 0.93 0.96 0.78     
;                                                                                                                                                                                                                                                                                                                                                                                                   
XKRATE(IRRRE,IRRRI,SSS)$(XKRATE(IRRRE,IRRRI,SSS) EQ 0) = 1.0;                                                                                                                                                                                                                                                                                                                                       
* -----------------------------------------------------
