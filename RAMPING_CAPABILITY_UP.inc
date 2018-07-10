PARAMETER RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,RAMPING_TECH_GROUP,RAMPING_FUELS,RAMPING_RATE)  'Ramping up capability (% Capacity/hour)'                                                                                                                                                                                                                   
/                                                                                                                                                                                                                                                                                                                                                             
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    COAL    .    LOW    0.03 
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    COAL    .    MEDIUM 0.1  
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    COAL    .    HIGH   1    
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    LIGNITE .    LOW    0.03 
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    LIGNITE .    MEDIUM 0.1  
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    LIGNITE .    HIGH   1    
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    NUCLEAR .    LOW    0.1  
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    NUCLEAR .    MEDIUM 0.15 
GCND                                                                                                                                                                                                                                                                                             .    STEAM_TURBINE_SUBCRITICAL .    NUCLEAR .    HIGH   1    
GCND                                                                                                                                                                                                                                                                                             .    GAS_TURBINE               .    NATGAS  .    LOW    0.02 
GCND                                                                                                                                                                                                                                                                                             .    GAS_TURBINE               .    NATGAS  .    MEDIUM 0.055
GCND                                                                                                                                                                                                                                                                                             .    GAS_TURBINE               .    NATGAS  .    HIGH   1    
/;                                                                                                                                                                                                                                                                                                                                                            
RAMPING_CAPABILITY_UP('GEXT',RAMPING_TECH_GROUP,RAMPING_FUELS,RAMPING_RATE)=RAMPING_CAPABILITY_UP('GCND',RAMPING_TECH_GROUP,RAMPING_FUELS,RAMPING_RATE);                                                                                                                                                                                                      
RAMPING_CAPABILITY_UP('GBPR',RAMPING_TECH_GROUP,RAMPING_FUELS,RAMPING_RATE)=RAMPING_CAPABILITY_UP('GCND',RAMPING_TECH_GROUP,RAMPING_FUELS,RAMPING_RATE);                                                                                                                                                                                                      
RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'STEAM_TURBINE_SUBCRITICAL',RAMPING_FUELS,RAMPING_RATE)$(RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'STEAM_TURBINE_SUBCRITICAL',RAMPING_FUELS,RAMPING_RATE) EQ 0)=RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'STEAM_TURBINE_SUBCRITICAL','COAL',RAMPING_RATE);                                                              
RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'GAS_TURBINE',RAMPING_FUELS,RAMPING_RATE)$(RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'GAS_TURBINE',RAMPING_FUELS,RAMPING_RATE) EQ 0)=RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'GAS_TURBINE','NATGAS',RAMPING_RATE);                                                                                                      
RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'COMBINED_CYCLE',RAMPING_FUELS,RAMPING_RATE)$(RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'COMBINED_CYCLE',RAMPING_FUELS,RAMPING_RATE) EQ 0)=RAMPING_CAPABILITY_UP(RAMPING_TECH_TYPE,'GAS_TURBINE','NATGAS',RAMPING_RATE);                                                                                                