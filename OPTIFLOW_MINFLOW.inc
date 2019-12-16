PARAMETER MINFLOW(YYY,CCCRRRAAA,PROC,FLOW) "Constraint about fuel use limitations (U/year)"
/


2020   .    DENMARK .    Demand  .    SumDemand  10000



*2020                                                                                        .    DENMARK .    GasDemand  .   GASFLOW_DEMAND 10000000
*2020                                                                                        .    DENMARK .    GasBuffer  .    GASFLOW       10000000
*2020                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW       10000000
2020                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW      10000000
2020                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW       10000000



*2020                                                                                        .    DENMARK .    GasBuffer  .    GASFLOW   50000000
*2020                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW  10000000
*2020                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW 80000000
*2020                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW  58000000

2030                                                                                        .    DENMARK .    GasBuffer  .    GASFLOW  20000000
2030                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW  11000000
2030                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW 75000000
2030                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW  60000000

*2050                                                                                        .    DENMARK .    GasBuffer  .    GASFLOW  20000000
*2050                                                                                        .    DENMARK .    SeaBuffer  .    SEAFLOW  11000000
*2050                                                                                        .    DENMARK .    RoadBuffer .    ROADFLOW 75000000
*2050                                                                                        .    DENMARK .    AirBuffer  .    AIRFLOW  60000000


/;

*MINFLOW(YYY,CCCRRRAAA,PROC,FLOW) = MINFLOW('2020',CCCRRRAAA,PROC,FLOW);
