SET APROCEXIMKAPNEW(YYY,IAAAE,IAAAI,PROC)     'Areas for possible location of new ProcExim or capacity expansion of existing ProcExim'                                                     
                                                                                                                                                                                           
/                                                                                                                                                                                          
*OBS FF                                                                                                                                                                                    
***CO2 pipelines                                                                                                                                                                           
2020                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
2025                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
2030                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
2035                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
2040                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
2045                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
2050                                                                                                                                   .    DK011_A .    DK012_A .    ProcExim_Pipeline_CO2
/                                                                                                                                                                                          
;                                                                                                                                                                                          
APROCEXIMKAPNEW(Y,IAAAE,IAAAI,PROC)$(ITRANSFROMTOPROC(PROC,IAAAE,IAAAI))=APROCEXIMKAPNEW(Y,'DK011_A','DK012_A',PROC);                                                                      
