* PARAMETER XLOSS contains the loss in transmission is expressed as a fraction                                                                                    
* of the power entering the transmission line.                                                                                                                    
* Units: (none)                                                                                                                                                   
* The input data are checked for reasonable values. See the file CHECK0.INC.                                                                                      
                                                                                                                                                                  
                                                                                                                                                                  
* Observe: Unreasonable results may be found if there are neither                                                                                                 
* cost nor loss associated with electrical transmission.                                                                                                          
* Therefore for all (non-diagonal) entries there should be a positive number                                                                                      
* in either TABLE XCOST or in TABLE XLOSS.                                                                                                                        
                                                                                                                                                                  
* Data source:                                                                                                                                                    
                                                                                                                                                                  
* The data entered assumes for simplicity that all transmission losses                                                                                            
* between regions RE and RI are the same in both directions.                                                                                                      
* Therefore the loss data is given only once.                                                                                                                     
* It is therefore by convention assumed that loss data between regions RE and RI                                                                                  
* is given only for ORD(RE) LT ORD(RI), i.e. data is entered                                                                                                      
* only in the upper right half of the table; the remaining data                                                                                                   
* is filled in by the LOOP statement immediately after the table.                                                                                                 
                                                                                                                                                                  
* (If this assumption is not found reasonable upon revision of the data,                                                                                          
* then fill in the whole table,                                                                                                                                   
* and delete the fill-in LOOP statement immediately after the table.)                                                                                             
*UPDATE 12-02-2020: losses calculated based on type of line assumptions and distance to center of polygons                                                        
                                                                                                                                                                  
TABLE XLOSS(IRRRE,IRRRI)  'Transmission loss between regions (fraction)'                                                                                          
                                                                                                           DK1     DK2     NO1     NO2     NO3     NO4     NO5    
DK1                                                                                                                0.00537         0.01092                        
DK2                                                                                                        0.00537                                                
NO1                                                                                                                                0.01666 0.01652         0.01379
NO2                                                                                                        0.01092         0.01666                         0.01176
NO3                                                                                                                        0.01652                 0.05789 0.01806
NO4                                                                                                                                        0.05789                
NO5                                                                                                                        0.01379 0.01176 0.01806                
;                                                                                                                                                                 
                                                                                                                                                                  
                                                                                                                                                                  
* Then fill in the values not entered in the table assuming symmetry:                                                                                             
*LOOP( (IRRRE,IRRRI)$(ORD(IRRRE) GT ORD(IRRRI)),  XLOSS(IRRRE,IRRRI)=XLOSS(IRRRI,IRRRE););                                                                        
