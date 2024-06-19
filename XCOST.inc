* PARAMETER XCOST contains information about the electrical transmission                                                     
* cost between pairs of regions.                                                                                             
* Units: EUR90/MW.                                                                                                           
* The input data are checked for reasonable values. See the file CHECK0.INC.                                                 
                                                                                                                             
* The electrical transmission cost is applied to the electricity                                                             
* entering the transmission line.                                                                                            
                                                                                                                             
* Observe: Unreasonable results may be found if there are neither                                                            
* cost nor loss associated with electrical transmission.                                                                     
* Therefore for all (non-diagonal) entries there should be a positive number                                                 
* in either TABLE XCOST or in TABLE XLOSS.                                                                                   
                                                                                                                             
* 0.32 EUR90/MWh approx 3 NOK/KWh                                                                                            
* 0.75 EUR90/MWh approx 7 NOK/KWh                                                                                            
* 2.00 EUR90/MWh approx 18.75 NOK/KWh                                                                                        
                                                                                                                             
* Data source:                                                                                                               
                                                                                                                             
TABLE XCOST(IRRRE,IRRRI)  'Transmission cost between regions'                                                                
                                                                             DK1    DK2    NO1    NO2    NO3    NO4    NO5   
DK1                                                                          0      0.0001 0.0001 0.0001 0.0001 0.0001 0.0001
DK2                                                                          0.0001 0      0.0001 0.0001 0.0001 0.0001 0.0001
NO1                                                                          0.0001 0.0001 0      0.0001 0.0001 0.0001 0.0001
NO2                                                                          0.0001 0.0001 0.0001 0      0.0001 0.0001 0.0001
NO3                                                                          0.0001 0.0001 0.0001 0.0001 0      0.0001 0.0001
NO4                                                                          0.0001 0.0001 0.0001 0.0001 0.0001 0      0.0001
NO5                                                                          0.0001 0.0001 0.0001 0.0001 0.0001 0.0001 0     
;                                                                                                                            
