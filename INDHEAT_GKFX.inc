PARAMETER INDHEAT_GKFX(YYY,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)        'Capacity of technologies [MW]';
TABLE INDHEAT_GKFX1(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP,YYY)           'Capacity of technologies'
*AREA                             Technology      Group                   Capacity end of year
                                                                            2012                 2013               2014               2015               2016               2017               2018               2019               2020               2021               2022               2023               2024               2025               2026               2027               2028               2029               2030               2031               2032               2033               2034               2035               2036               2037               2038              2039              2040             2041             2042             2043             2044             2045             2046             2047             2048             2049             2050             /*   2031 2032 2033 2034 2035 2036 2037 2038 2039 2040 2041 2042 2043 2044 2045 2046 2047 2048 2049 2050 */
DK2_NoDH                     .    GB              .GR_GB                    1569.5               1595.4             1621.3             1647.2             1673.1             1699               1724.9             1750.8             1776.7             1784.7             1792.7             1800.7             1808.7             1816.7             1824.7             1832.7             1840.7             1848.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7            1856.7            1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7
DK2_NoDH                     .    WP              .GR_WP                    156.95               156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95            156.95            156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95
DK2_NoDH                     .    HPA2W           .GR_GBHPA2W
DK2_NoDH                     .    HPA2A           .GR_ELHPA2A
DK2_NoDH                     .    SH              .GR_WPSH
DK2_NoDH                     .    EL              .GR_ELHPA2A

DK1_NoDH                     .    GB              .GR_GB                    1569.5               1595.4             1621.3             1647.2             1673.1             1699               1724.9             1750.8             1776.7             1784.7             1792.7             1800.7             1808.7             1816.7             1824.7             1832.7             1840.7             1848.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7             1856.7            1856.7            1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7           1856.7
DK1_NoDH                     .    WP              .GR_WP                    156.95               156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95             156.95            156.95            156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95           156.95
DK1_NoDH                     .    HPA2W           .GR_GBHPA2W
DK1_NoDH                     .    HPA2A           .GR_ELHPA2A
DK1_NoDH                     .    SH              .GR_WPSH
DK1_NoDH                     .    EL              .GR_ELHPA2A

;
*INDHEAT_GKFX(YYY,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP) = INDHEAT_GKFX1(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP,YYY);
INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP)=0;
*$ontext
*Just a starting point!
INDHEAT_GKFX('2016',INDHEAT_AAA,'GB','GR_GB')=0.2*INDHEAT_DH('2016',INDHEAT_AAA)/8760;
INDHEAT_GKFX('2020',INDHEAT_AAA,'GB','GR_GB')=0.2*INDHEAT_DH('2020',INDHEAT_AAA)/8760;
INDHEAT_GKFX('2030',INDHEAT_AAA,'GB','GR_GB')=0.15*INDHEAT_DH('2030',INDHEAT_AAA)/8760;

INDHEAT_GKFX('2016',INDHEAT_AAA,'WP','GR_WP')=INDHEAT_DH('2016',INDHEAT_AAA)/8760;
INDHEAT_GKFX('2020',INDHEAT_AAA,'WP','GR_WP')=0.5*INDHEAT_DH('2020',INDHEAT_AAA)/8760;
INDHEAT_GKFX('2030',INDHEAT_AAA,'WP','GR_WP')=0.35*INDHEAT_DH('2030',INDHEAT_AAA)/8760;
*$offtext