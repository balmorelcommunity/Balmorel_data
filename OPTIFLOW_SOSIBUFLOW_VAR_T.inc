PARAMETER SOSIBUFLOW_VAR_T(AAA,PROC,FLOW,SSS,TTT) "Variation in some Source, Sink or Buffer Flows over the year"
/                                                                                                               
                                                                                                                
/;                                                                                                              
                                                                                                                
SOSIBUFLOW_VAR_T(IA,'Wood_Gen','WOOD_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                 
SOSIBUFLOW_VAR_T(IA,'Straw_Gen','STRAW_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;               
SOSIBUFLOW_VAR_T(IA,'Manure_Gen','MANURE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;             
