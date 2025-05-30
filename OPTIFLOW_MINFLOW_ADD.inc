*Road Fuel Demand                                                                                                                                                   
*2050                                                                                          .    AUSTRIA        .    RoadBuffer .    ROADFLOW 16200520.0256962   
*2050                                                                                          .    BELGIUM        .    RoadBuffer .    ROADFLOW 7194480.94768338   
*2050                                                                                          .    BULGARIA       .    RoadBuffer .    ROADFLOW 7772962.05123373   
*2050                                                                                          .    CROATIA        .    RoadBuffer .    ROADFLOW 4468781.57892274   
*2050                                                                                          .    CZECH_REPUBLIC .    RoadBuffer .    ROADFLOW 23165548.4628941   
*2050                                                                                          .    DENMARK        .    RoadBuffer .    ROADFLOW 6770222.90246891   
*2050                                                                                          .    ESTONIA        .    RoadBuffer .    ROADFLOW 1582119.40678019   
*2050                                                                                          .    FINLAND        .    RoadBuffer .    ROADFLOW 15200874.9857693   
*2050                                                                                          .    FRANCE         .    RoadBuffer .    ROADFLOW 76363789.450954    
*2050                                                                                          .    GERMANY        .    RoadBuffer .    ROADFLOW 85041814.663988    
*2050                                                                                          .    HUNGARY        .    RoadBuffer .    ROADFLOW 16235937.9981254   
*2050                                                                                          .    GREECE         .    RoadBuffer .    ROADFLOW 7908926.79995873   
*2050                                                                                          .    IRELAND        .    RoadBuffer .    ROADFLOW 4371282.95193009   
*2050                                                                                          .    ITALY          .    RoadBuffer .    ROADFLOW 73234437.4232386   
*2050                                                                                          .    LATVIA         .    RoadBuffer .    ROADFLOW 1690220.63165466   
*2050                                                                                          .    LITHUANIA      .    RoadBuffer .    ROADFLOW 4008341.85597044   
*2050                                                                                          .    LUXEMBOURG     .    RoadBuffer .    ROADFLOW 3394961.95901757   
*2050                                                                                          .    NETHERLANDS    .    RoadBuffer .    ROADFLOW 2904859.26967364   
*2050                                                                                          .    POLAND         .    RoadBuffer .    ROADFLOW 57663606.5129286   
*2050                                                                                          .    PORTUGAL       .    RoadBuffer .    ROADFLOW 7850217.8119943    
*2050                                                                                          .    ROMANIA        .    RoadBuffer .    ROADFLOW 18759013.8226068   
*2050                                                                                          .    SLOVAKIA       .    RoadBuffer .    ROADFLOW 8808532.71867389   
*2050                                                                                          .    SLOVENIA       .    RoadBuffer .    ROADFLOW 4681098.01211525   
*2050                                                                                          .    SPAIN          .    RoadBuffer .    ROADFLOW 48106153.6563362   
*2050                                                                                          .    SWEDEN         .    RoadBuffer .    ROADFLOW 30113244.3227207   
                                                                                                                                                                    
*Aviation Fuel Demand                                                                                                                                               
*2050                                                                                          .    AUSTRIA        .    AirBuffer  .    AIRFLOW  38194033.6593325   
*2050                                                                                          .    BELGIUM        .    AirBuffer  .    AIRFLOW  69529284.7091366   
*2050                                                                                          .    BULGARIA       .    AirBuffer  .    AIRFLOW  12987685.0174628   
*2050                                                                                          .    CROATIA        .    AirBuffer  .    AIRFLOW  8654844.28320139   
*2050                                                                                          .    CZECH_REPUBLIC .    AirBuffer  .    AIRFLOW  20801265.2815119   
*2050                                                                                          .    DENMARK        .    AirBuffer  .    AIRFLOW  46674831.0549629   
*2050                                                                                          .    ESTONIA        .    AirBuffer  .    AIRFLOW  3108266.39777427   
*2050                                                                                          .    FINLAND        .    AirBuffer  .    AIRFLOW  30027412.7163086   
*2050                                                                                          .    FRANCE         .    AirBuffer  .    AIRFLOW  293726731.592587   
*2050                                                                                          .    GERMANY        .    AirBuffer  .    AIRFLOW  455105561.637073   
*2050                                                                                          .    GREECE         .    AirBuffer  .    AIRFLOW  72183741.5610726   
*2050                                                                                          .    HUNGARY        .    AirBuffer  .    AIRFLOW  12969512.3395677   
*2050                                                                                          .    IRELAND        .    AirBuffer  .    AIRFLOW  49259536.9693802   
*2050                                                                                          .    ITALY          .    AirBuffer  .    AIRFLOW  228982378.716077   
*2050                                                                                          .    LATVIA         .    AirBuffer  .    AIRFLOW  5342510.15305681   
*2050                                                                                          .    LITHUANIA      .    AirBuffer  .    AIRFLOW  4379090.78394137   
*2050                                                                                          .    LUXEMBOURG     .    AirBuffer  .    AIRFLOW  23257560.4629891   
*2050                                                                                          .    NETHERLANDS    .    AirBuffer  .    AIRFLOW  174869163.950437   
*2050                                                                                          .    POLAND         .    AirBuffer  .    AIRFLOW  42939118.6472547   
*2050                                                                                          .    PORTUGAL       .    AirBuffer  .    AIRFLOW  65047536.4230656   
*2050                                                                                          .    ROMANIA        .    AirBuffer  .    AIRFLOW  21888750.0518473   
*2050                                                                                          .    SLOVAKIA       .    AirBuffer  .    AIRFLOW  1988831.95480255   
*2050                                                                                          .    SLOVENIA       .    AirBuffer  .    AIRFLOW  1278301.59794182   
*2050                                                                                          .    SPAIN          .    AirBuffer  .    AIRFLOW  317951766.842202   
*2050                                                                                          .    SWEDEN         .    AirBuffer  .    AIRFLOW  44843835.0187902   
                                                                                                                                                                    
*MINFLOW('2030',C,PROC,FLOW)$(MINFLOW('2050',C,PROC,FLOW)) = 0.1*MINFLOW('2050',C,PROC,FLOW);                                                                       
*MINFLOW('2035',C,PROC,FLOW)$(MINFLOW('2050',C,PROC,FLOW)) = 0.3*MINFLOW('2050',C,PROC,FLOW);                                                                       
*MINFLOW('2040',C,PROC,FLOW)$(MINFLOW('2050',C,PROC,FLOW)) = 0.5*MINFLOW('2050',C,PROC,FLOW);                                                                       
*MINFLOW('2045',C,PROC,FLOW)$(MINFLOW('2050',C,PROC,FLOW)) = 0.75*MINFLOW('2050',C,PROC,FLOW);                                                                      
