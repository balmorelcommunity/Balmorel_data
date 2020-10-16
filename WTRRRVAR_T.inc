TABLE WTRRRVAR_S(AAA,SSS)  'Seasonal variation of generation of hydro run-of-river'


                        S01     S02     S03     S04     S05     S06     S07     S08     S09     S10     S11     S12     S13     S14     S15     S16     S17     S18     S19     S20     S21     S22     S23     S24     S25     S26     S27     S28     S29     S30     S31     S32     S33     S34     S35     S36     S37     S38     S39     S40     S41     S42     S43     S44     S45     S46     S47     S48     S49     S50     S51     S52
HSTAN_A1                251     227     102     48      34      30      36      105     154     99      145     176     144     56      82      86      98      158     155     243     339     254     214     253     331     340     300     377     253     290     237     136     105     103     162     134     236     182     183     268     115     175     88      156     252     307     464     158     62      45      49      119

;

Parameter WTRRRVAR_T(AAA,SSS,TTT)  'Hourly variation of generation of hydro run-of-river';
WTRRRVAR_T(AAA,SSS,TTT) = WTRRRVAR_S(AAA,SSS);

WTRRRVAR_T(IA,SSS,TTT)$((NOT SUM((S,T),WTRRRVAR_T(IA,S,T))) AND WTRRRFLH(IA)) = WTRRRVAR_T('HSTAN_A1',SSS,TTT);

WTRRRVAR_S(AAA,SSS)=0;







