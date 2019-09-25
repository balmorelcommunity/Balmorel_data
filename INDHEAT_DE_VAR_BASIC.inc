$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu
PARAMETERS
INDHEAT_DE_VAR_BASIC(RRR,DEUSER,SSS,TTT) 'Electricity consumption profile excluding heating.'
INDHEAT_DE_VAR_BASIC_SUMMER(RRR,DEUSER,TTT)
;
SET TEMP_S /temps01*temps11/;
TABLE INDHEAT_BASIC_DE_SRATE(CCC,TEMP_S) 'Own assumption on basic electricity demand ratio in different seasons compared to summer.'
*                                                                                                                                    S001-S005                               S006-S009        S010-S013        S014-S018 S019-S022        S023-S026        S027-S036 S037-S040        S041-S044        S045-S048        S049-S052
                                                                                                                                     temps01                                 temps02          temps03          temps04   temps05          temps06          temps07   temps08          temps09          temps10          temps11
NORWAY                                                                                                                               1.6                                     1.5              1.4              1.3       1.2              1.1              1         1.1              1.2              1.5              1.6
SWEDEN                                                                                                                               1.4                                     1.33333333333333 1.26666666666667 1.2       1.13333333333333 1.06666666666667 1         1.06666666666667 1.13333333333333 1.33333333333333 1.4
FINLAND                                                                                                                              1.2                                     1.16666666666667 1.13333333333333 1.1       1.06666666666667 1.03333333333333 1         1.03333333333333 1.06666666666667 1.16666666666667 1.2
;

LOOP(CCC,
LOOP(RRR$(CCCRRR(CCC,RRR) AND SUM(TEMP_S, INDHEAT_BASIC_DE_SRATE(CCC,TEMP_S))),

INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)= SMIN(SSS$(ORD(SSS)>26 AND ORD(SSS)<=36),DE_VAR_T(RRR,'RESE',SSS,TTT));


LOOP(SSS$(ORD(SSS)>26 AND ORD(SSS)<=36),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps07')
);
LOOP(SSS$(ORD(SSS)<=5 OR ORD(SSS)>48),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps01')
);
LOOP(SSS$((ORD(SSS)>5 AND ORD(SSS)<=9) OR (ORD(SSS)>44 AND ORD(SSS)<=48)),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps02')
);
LOOP(SSS$(ORD(SSS)>9 AND ORD(SSS)<=13),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps03')
);
LOOP(SSS$((ORD(SSS)>13 AND ORD(SSS)<=18) OR (ORD(SSS)>44 AND ORD(SSS)<=48)),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps04')
);
LOOP(SSS$((ORD(SSS)>18 AND ORD(SSS)<=22) OR (ORD(SSS)>40 AND ORD(SSS)<=44)),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps05')
);
LOOP(SSS$((ORD(SSS)>22 AND ORD(SSS)<=26) OR (ORD(SSS)>36 AND ORD(SSS)<=40)),
INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC_SUMMER(RRR,'RESE',TTT)                                                * INDHEAT_BASIC_DE_SRATE(CCC,'temps06')
);

DE_VAR_T(RRR,'RESE',SSS,TTT)= INDHEAT_DE_VAR_BASIC(RRR,'RESE',SSS,TTT)
);
);

INDHEAT_DE_VAR_BASIC_SUMMER(RRR,DEUSER,TTT)=0;
INDHEAT_BASIC_DE_SRATE(CCC,TEMP_S)=0;
$label endindheat_eu
