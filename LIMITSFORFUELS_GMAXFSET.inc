SET LIMITSFORFUELS_GMAXFSET(LIMITSFORFUELS_NUMCONMAX,CCCRRRAAA,FFF)                                                                                    
/                                                                                                                                                      
NUMCONMAX1                                                                                                               .    DENMARK  .    STRAW      
NUMCONMAX2                                                                                                               .    DENMARK  .    BIOGAS     
NUMCONMAX3                                                                                                               .    DENMARK  .    STRAW      
NUMCONMAX3                                                                                                               .    DENMARK  .    WOODPELLETS
NUMCONMAX4                                                                                                               .    DENMARK  .    WOODPELLETS
NUMCONMAX5                                                                                                               .    DENMARK  .    STRAW      
NUMCONMAX5                                                                                                               .    DENMARK  .    WOODPELLETS
$ifi not %combtech%==yes $goto nocombtech                                                                                                              
NUMCONMAX2                                                                                                               .    DENMARK  .    BIOGAS_UP  
$label nocombtech                                                                                                                                      
$ifi not %hydrogen%==yes $goto nohydrogen                                                                                                              
NUMCONMAX2                                                                                                               .    DENMARK  .    BIOGAS_H2  
$label nohydrogen                                                                                                                                      
/                                                                                                                                                      
;                                                                                                                                                      
LIMITSFORFUELS_GMAXFSET(LIMITSFORFUELS_NUMCONMAX,C,FFF)=LIMITSFORFUELS_GMAXFSET(LIMITSFORFUELS_NUMCONMAX,'DENMARK',FFF);                               
