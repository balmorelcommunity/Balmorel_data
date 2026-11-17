PARAMETER MINFLOW(YYY,CCCRRRAAA,PROC,FLOW) "Constraint about fuel use limitations (U/year)"                                                                
/                                                                                                                                                          
                                                                                                                                                           
*2020                                                                                       .    DENMARK .    Demand     .    SumDemand 10000              
                                                                                                                                                           
*2020                                                                                       .    DENMARK .    GasBuffer  .    GASFLOW   10000000           
                                                                                                                                                           
2020                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   0                  
2020                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  0                  
2020                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   0                  
                                                                                                                                                           
2025                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   10077962.7016319   
2025                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  1475740.10958259   
2025                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   7779138.50916048   
                                                                                                                                                           
2030                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   20155925.4032639   
2030                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  2951480.21916518   
2030                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   15558277.018321    
                                                                                                                                                           
2035                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   30233888.1048958   
2035                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  4427220.32874777   
2035                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   23337415.5274814   
                                                                                                                                                           
2040                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   40311850.8065277   
2040                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  5902960.43833036   
2040                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   31116554.0366419   
                                                                                                                                                           
2045                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   50389813.5081596   
2045                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  7378700.54791295   
2045                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   38895692.5458024   
                                                                                                                                                           
2050                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW   60467776.2097916   
2050                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW  8854440.65749555   
2050                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW   46674831.0549629   
                                                                                                                                                           
                                                                                                                                                           
2020                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   0                  
2020                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  0                  
2020                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   0                  
                                                                                                                                                           
2025                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   25019139.3821823   
2025                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  4279685.42081984   
2025                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   7473972.50313169   
                                                                                                                                                           
2030                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   50038278.7643646   
2030                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  8559370.84163967   
2030                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   14947945.0062634   
                                                                                                                                                           
2035                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   75057418.1465469   
2035                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  12839056.2624595   
2035                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   22421917.5093951   
                                                                                                                                                           
2040                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   100076557.528729   
2040                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  17118741.6832793   
2040                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   29895890.0125268   
                                                                                                                                                           
2045                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   125095696.910912   
2045                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  21398427.1040992   
2045                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   37369862.5156585   
                                                                                                                                                           
2050                                                                                        .    SWEDEN  .    SeaBuffer  .    SEAFLOW   150114836.293094   
2050                                                                                        .    SWEDEN  .    RoadBuffer .    ROADFLOW  25678112.524919    
2050                                                                                        .    SWEDEN  .    AirBuffer  .    AIRFLOW   44843835.0187902   
                                                                                                                                                           
/;                                                                                                                                                         
                                                                                                                                                           
*MINFLOW(YYY,CCCRRRAAA,PROC,FLOW) = MINFLOW('2020',CCCRRRAAA,PROC,FLOW);                                                                                   
* For now, GDP ratio                                                                                                                                       
MINFLOW(YYY,'NORWAY',PROC,FLOW) = MINFLOW(YYY,'DENMARK',PROC,FLOW) * 1.21;                                                                                 
MINFLOW(YYY,'UNITED_KINGDOM',PROC,FLOW) = MINFLOW(YYY,'DENMARK',PROC,FLOW) * 7.86;                                                                         
MINFLOW(YYY,'UNITED_KINGDOM','RoadBuffer','ROADFLOW') = 0;                                                                                                     
MINFLOW(YYY,'UNITED_KINGDOM',AirBuffer,AIRFLOW) = 0;                                                                                                       
