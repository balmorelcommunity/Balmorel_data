TABLE AFRRUP(YYY,RRR) 'AFRR up regulation requirement in each hour (MW)'
          2020      2030     2050
DK1        288       897      945
DK2        103       140      402
FIN        266       258      245
DE4-E      587       666      866
DE4-N      587       666      866
DE4-S      587       666      866
DE4-W      587       666      866
NL         400      1428     2476
NO1        71         87       82
NO2        71         87       82
NO3        71         87       82
NO4        71         87       82
NO5        71         87       82
SE1        94         94      174
SE2        94         94      174
SE3        94         94      174
SE4        94         94      174
UK         1226     2365     2700
EE         58         58       53
LV         332       333      270
LT         156       156      647
PL         1227     1253     1255
BE         425      1586     1553
FR         3175     3266     5373

;

AFRRUP(Y,IR)$(Y.val LT 2020)=AFRRUP('2020',IR);
AFRRUP(Y,IR)$(Y.val LT 2030 AND Y.val GE 2020)=AFRRUP('2020',IR);
AFRRUP(Y,IR)$(Y.val LT 2050 AND Y.val GE 2030)=AFRRUP('2030',IR);

