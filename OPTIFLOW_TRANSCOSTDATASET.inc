SET TRANSCOSTDATASET "Transport cost element data and mapping to FLOWINDIC"                         
/                                                                                                   
TCDMONEYDISTFLOW   "Transport cost related to distance and amount (Money/(U flow))"                 
TCDMONEYFLOW     "Handling cost related to transported amount (Money/U flow)"                       
TCDGHGEMISSION  "CO2 equiv emission related to distance and amount (U GHG Buffer/(U Flow*distance))"
/;                                                                                                  
                                                                                                    
* Temporaty placement here, should have own file or be internal (cf. th 'I') if kept this way;      
SET TRANSDISTWEIGHT "Internal set for handling of transport related cost"                           
/                                                                                                   
ITRANSDWDISTWEIGHT     "Cost proportional to distance and weight (Dist*U flow)"                     
ITRANSDWWEIGHT         "Cost proportional to weight (U flow)"                                       
/;                                                                                                  
