PARAMETER TRANSFLOWMAX(IAAAE,IAAAI,PROC,FLOW)  "Transport quantity maximum value (ton/h)"      
                                                                                               
/                                                                                              
                                                                                               
                                                                                               
/;                                                                                             
                                                                                               
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximTruck',IFLOWEXIM)$(AAAIMPORT(IAAAE) OR AAAIMPORT(IAAAI))=EPS;
TRANSFLOWMAX(IAAAE,IAAAI,'ProcEximShip',IFLOWEXIM)$(NOT AAAIMPORT(IAAAE))=EPS;                 
