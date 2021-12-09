* DATACENTERS PARAMETER DC_GDHE(GGG)                                    
* 'Heat consumption of chiller technologies (MWt-hot/MWt-cold)'         
                                                                        
PARAMETER DC_GDHE(GGG);                                                 
DC_GDHE(G)$(GDATA(G,'GDSUBTECHGROUP') EQ DC_ABSCHILLER)         = 1/0.7;
DC_GDHE(G)$(GDATA(G,'GDSUBTECHGROUP') EQ DC_ELECCHILLER)        = 0;    
