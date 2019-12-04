TABLE AFRRUP(YYY,CCCRRRAAA) 'AFRR up regulation requirement in each hour (MW)'
            DK1        DK2     FINLAND    GERMANY   NETHERLANDS     NORWAY     SWEDEN     UNITED_KINGDOM     ESTONIA     LATVIA       LITHUANIA      POLAND     BELGIUM      FRANCE
2020        288        103        266        2350           400        353        374               1226          58        332             156        1227         425        3175
2030        897        140        258        2665          1428        350        374               2365          58        333             156        1253        1586        3266
2050        945        402        245        3464          2476        328        695               2700          53        270             647        1255        1553        5373
;

AFRRUP(Y,CCCRRRAAA)$(Y.val LT 2020)=AFRRUP('2020',CCCRRRAAA);
AFRRUP(Y,CCCRRRAAA)$(Y.val LT 2030 AND Y.val GE 2020)=AFRRUP('2020',CCCRRRAAA);
AFRRUP(Y,CCCRRRAAA)$(Y.val LT 2050 AND Y.val GE 2030)=AFRRUP('2030',CCCRRRAAA);

