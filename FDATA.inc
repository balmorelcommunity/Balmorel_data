* File FDATA.inc                                                                                                                                     
                                                                                                                                                     
* This file is part of the Balmorel model, version 2.11 Alpha (April 2004).                                                                          
* For CO2 see http://acm.eionet.europa.eu/docs/ETCACC_TechnPaper_2003_10_CO2_EF_fuels.pdf                                                            
*------------------------------------------------------------------------------                                                                      
                                                                                                                                                     
* PARAMETER FDATA contains information about emission characteristics of fuels.                                                                      
                                                                                                                                                     
* In addition it contains a name (FDACRONYM) for the fuel, note that this must be as an ACRONYM previously.                                          
* Presnetly it also contains a numerical code identication of the individual fuels,                                                                  
* however, this may become invalid, so you shold use only the FDACRONYM.                                                                             
                                                                                                                                                     
                                                                                                                                                     
TABLE FDATA(FFF,FDATASET)   'Fuel specific values'                                                                                                   
                                                                                                            FDACRONYM          FDNB FDCO2 FDSO2 FDN2O
*                                                                                                           Units                   kg/GJ kg/GJ kg/GJ
NUCLEAR                                                                                                     NUCLEAR            1    0     0     0    
NATGAS                                                                                                      NATGAS             2    56.1  0     0.001
COAL                                                                                                        COAL               3    94.6  0.714 0.003
LIGNITE                                                                                                     LIGNITE            4    111.1 1.428 0.003
FUELOIL                                                                                                     FUELOIL            5    74    0.446 0.002
LIGHTOIL                                                                                                    LIGHTOIL           6    74    0.023 0.002
MUNIWASTE                                                                                                   MUNIWASTE          11   0     0.156 0.004
WOODCHIPS                                                                                                   WOODCHIPS          14   0     0.025 0.004
WOODPELLETS                                                                                                 WOODPELLETS        17   0     0.025 0.004
WOODWASTE                                                                                                   WOODWASTE          18   0     0.025 0.004
BIOOIL                                                                                                      BIOOIL             19   0     0.025 0.004
BIOGAS                                                                                                      BIOGAS             22   0     0.025 0.004
WIND                                                                                                        WIND               25   0     0     0    
WATER                                                                                                       WATER              26   0     0     0    
SUN                                                                                                         SUN                27   0     0     0    
ELECTRIC                                                                                                    ELECTRIC           28   0     0     0    
HEAT                                                                                                        HEAT                                     
THERMGAS                                                                                                    THERMGAS                0                
DUMMY                                                                                                       DUMMY              30   0     0     0    
;                                                                                                                                                    
