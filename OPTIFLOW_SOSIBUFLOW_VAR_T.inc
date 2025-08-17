PARAMETER SOSIBUFLOW_VAR_T(AAA,PROC,FLOW,SSS,TTT) "Variation in some Source, Sink or Buffer Flows over the year"
/                                                                                                               
                                                                                                                
/;                                                                                                              
                                                                                                                
SOSIBUFLOW_VAR_T(IA,'Wood_Gen','WOOD_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                 
SOSIBUFLOW_VAR_T(IA,'Straw_Gen','STRAW_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;               
SOSIBUFLOW_VAR_T(IA,'Straw_Gen','STRAW_GEN_FLOW_PY',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
*SOSIBUFLOW_VAR_T(IA,'Wood_Pellets_Gen','WOOD_PELLETS_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;
SOSIBUFLOW_VAR_T(IA,'Manure_Gen','MANURE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;             
                                                                                                                
SOSIBUFLOW_VAR_T(IA,'AirBuffer','AIRFLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                      
SOSIBUFLOW_VAR_T(IA,'RoadBuffer','ROADFLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                    
SOSIBUFLOW_VAR_T(IA,'SeaBuffer','SEAFLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                      
                                                                                                                
SOSIBUFLOW_VAR_T(IA,'KeroseneSource','KEROSENEFLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;            
SOSIBUFLOW_VAR_T(IA,'DieselSource','DIESELFLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                
SOSIBUFLOW_VAR_T(IA,'MDOSource','MDOFLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                      
                                                                                                                
SOSIBUFLOW_VAR_T(IA,'CO2_Seq_Buffer','CO2_FLOW_SEQ_SUM',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;        
SOSIBUFLOW_VAR_T(IA,'Gas_Buffer','SNG_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                    
SOSIBUFLOW_VAR_T(IA,'CO2_Source_DAC','CO2_SOURCE_FLOW_DAC',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;     
