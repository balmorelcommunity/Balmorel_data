PARAMETER TRANSFLOWMAX(IAAAE,IAAAI,PROC,FLOW)  "Transport quantity maximum value (ton/h)"      
                                                                                               
/                                                                                              
                                                                                               
                                                                                               
/;                                                                                             
                                                                                               
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximTruck',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximShip',IFLOWEXIM)$(NOT AAAIMPORT(IAAAE))=EPS;       
$ontext          
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximCO2Truck',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximCO2OnshorePipe',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximCO2OffshorePipe',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximCO2OnshorePipeSTO',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximPipeImport',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,'DK_Greensand_CO2','ProcEximPipeImport',IFLOWEXIM)=EPS;                                                                                                                 
TRANSFLOWMAX(IAAAE,'DK_Greensand_CO2','ProcEximCO2OnshorePipeSTO',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Greensand_CO2','ProcEximCO2OnshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Greensand_CO2','ProcEximCO2Truck',IFLOWEXIM)=EPS;

TRANSFLOWMAX(IAAAE,'DK_Havnsoe_CO2','ProcEximPipeImport',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Havnsoe_CO2','ProcEximCO2OffshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Havnsoe_CO2','ProcEximCO2OnshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Stenlille_CO2 ','ProcEximPipeImport',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Stenlille_CO2 ','ProcEximCO2OffshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Stenlille_CO2 ','ProcEximCO2OnshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Roedby_CO2 ','ProcEximPipeImport',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Roedby_CO2 ','ProcEximCO2OffshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Roedby_CO2 ','ProcEximCO2OnshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Gassum_CO2 ','ProcEximPipeImport',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Gassum_CO2','ProcEximCO2OffshorePipe',IFLOWEXIM)=EPS;
TRANSFLOWMAX(IAAAE,'DK_Gassum_CO2 ','ProcEximCO2OnshorePipe',IFLOWEXIM)=EPS;
$offtext
     



                                                           