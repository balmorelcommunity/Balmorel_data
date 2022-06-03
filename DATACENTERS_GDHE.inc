* DATACENTERS PARAMETER DC_GDHE(GGG)                                                                        
* 'Consumption/production of chiller technologies from/to district heating (MWt-hot/MWt-cold)'              
                                                                                                            
PARAMETER DC_GDHE(GGG);                                                                                     
DC_GDHE(G)$(GDATA(G,'GDSUBTECHGROUP') EQ DC_ABSCHILLER)                                        = -1/0.7;    
DC_GDHE(G)$(GDATA(G,'GDSUBTECHGROUP') EQ DC_ELECCHILLER)                                       = 0;         
DC_GDHE(G)$(GDATA(G,'GDSUBTECHGROUP') EQ DC_HEATPUMP)                                          = (1+1/3.71);
