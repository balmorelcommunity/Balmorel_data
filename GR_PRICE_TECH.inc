TABLE GR_PRICE_TECH(CCC,GRDATASET)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
                                                                                                                             GRDSUBS          GRDECW                  GRDECS               GRDTOU1             GRDTOU2             GRDTOU3             GRDTOU4             GRDDCW                  GRDDCS               GRDDC2          GRDDCTOU          GRDDCY                                                                                                                                                                                                
*** description                                                                                                              Subscribed Power Energy charge winter ** Energy charge summer TOU energy charge 1 TOU energy charge 2 TOU energy charge 3 TOU energy charge 4 Demand charge winter ** Demand charge summer Demand charge 2 Demand charge TOU Demand charge with yearly calculation                                                                                                                                                                 
*** unit                                                                                                                     �/kW             �/MWh                   �/MWh                �/MWh               �/MWh               �/MWh               �/MWh               �/kW-peak/month         �/kW-peak/month      �/kW-peak/month �/kW-peak/month   �/kW-peak/year                              Source:                                                                                                                                                   
DENMARK                                                                                                                      0.032907         23.34                                                                                                                                                                                                                                              !!   Lucien data collection                                                                                                                                    
ESTONIA                                                                                                                      2.0521           9.6                                                                                                                                                                                                         34.2                                   !!   https://www.elektrilevi.ee/-/doc/6305157/kliendile/el_hinnakiri_vorguteenused_01112017_est.pdf                                                            
FINLAND                                                                                                                      0.3524                                                        11.7                8.7                 8.7                                     2.2                                                                                                                   !!   Average of Helsinki, Oulo and Turku tariff                                                                                                                
LATVIA                                                                                                                       0                21.29                                                                                                                                                                                                       19.56                                  !!   Daniel and Eli data collection                                                                                                                            
LITHUANIA                                                                                                                    0                19                                                                                                                                                                                                          6.96                                   !!   Daniel and Eli data collection                                                                                                                            
NORWAY                                                                                                                       0.2282           6.4                                                                                                                                                                                                         34.18                                  !!   https://www.nve.no/reguleringsmyndigheten-for-energi-rme-marked-og-monopol/nettjenester/nettleie/nettleiestatistikk/nettleiestatistikk-for-naeringskunder/
SWEDEN                                                                                                                       33.2558          2.69                                                                                                                                                                                                                                               !!   https://www.ei.se/sv/Publikationer/Arsrapporter/elnatsforetag-arsrapporter/                                                                               
GERMANY                                                                                                                      11.2137023333333 11.6075                                                                                                                                                                                                                                            !!   Average of Nordic countries                                                                                                                               
;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
* it assumed that an average P2H connection is 10 MW, therefore the fixed component is divided by 10 to get the price per MW                                                                                                                                                                                                                                                                                                                                                                                                                                    
** for the whole year if no entered value for summer                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
GR_PRICE_TECH('NETHERLANDS',GRDATASET) = GR_PRICE_TECH('GERMANY',GRDATASET);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
GR_PRICE_TECH('UNITED_KINGDOM',GRDATASET) = GR_PRICE_TECH('GERMANY',GRDATASET);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
GR_PRICE_TECH('POLAND',GRDATASET) = GR_PRICE_TECH('GERMANY',GRDATASET);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
* Convert from �2015 to �2012                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
GR_PRICE_TECH(CCC,GRDATASET) = GR_PRICE_TECH(CCC,GRDATASET) * 0.9799;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           