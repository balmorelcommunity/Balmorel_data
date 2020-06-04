PARAMETER SOCIOTARIFF_ALL(YYY,CCC,FFF) 'Socio-economic grid tariffs for all sectors in base model'  ;
*Data is based on Energinet and Ea, see also 82524 Futuregas\Socio-economic tariff from EA

SOCIOTARIFF_ALL(Y,C,'ELECTRIC')=119/7.465;
SOCIOTARIFF_ALL(Y,C,'NATGAS')=3.9/7.465*3.6;
SOCIOTARIFF_ALL(Y,C,'BIONG')=3.9/7.465*3.6;

$ifi not %GRIDTARIFFS%==yes  $goto end_gridtariffs
SOCIOTARIFF_ALL(Y,C,'ELECTRIC')=0;
SOCIOTARIFF_ALL(Y,C,'NATGAS')=4.95;
SOCIOTARIFF_ALL(Y,C,'BIONG')=4.95;
$label end_gridtariffs
