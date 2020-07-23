*Emission prices set the same as EU ETS for now.                        Default for the 'LIM_' entries: 0 implies irrelevant, EPS implies no emission permitted
*LIM applies only in indheat_eu

$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu
TABLE INDHEAT_MCO2(CCC,YYY)
*Emission effort sharing target, unit t CO2
                       2020                 2030
Belgium                23056094             17631131
Denmark                3974133              3030276
Estonia                327844               256959
Finland                2681098              1946988
France                 84723654             62065002
Germany                129067061            93048347
Latvia                 930871               747879
Lithuania              1107154              876096
Netherlands            23776687             18115571
Norway                 996241               720174
Poland                 47935007             39104874
Sweden                 2340249              1691746
United_Kingdom         88911797             66683848

;

PARAMETER INDHEAT_M_POL(YYY,MPOLSET,CCC)  'Emission policy data';
INDHEAT_M_POL(Y,'LIM_CO2',C)$((Y.val > 2019) AND (Y.val < 2030))= INDHEAT_MCO2(C,'2020');
INDHEAT_M_POL(Y,'LIM_CO2',C)$((Y.val > 2029) AND (Y.val < 2040))= INDHEAT_MCO2(C,'2030');
INDHEAT_M_POL('2040','LIM_CO2',C)= INDHEAT_M_POL('2030','LIM_CO2',C)/2;
INDHEAT_M_POL('2050','LIM_CO2',C)= EPS;

$label endindheat_eu

INDHEAT_M_POL(Y,'TAX_CO2',C) = 0; !!M_POL(Y,'TAX_CO2',C);
INDHEAT_M_POL(Y,'TAX_SO2',C) = 0; !!M_POL(Y,'TAX_SO2',C);
INDHEAT_M_POL(Y,'TAX_NOX',C) = 0; !!M_POL(Y,'TAX_NOX',C);

