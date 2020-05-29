PARAMETER SOCIOTARIFF_INDHEAT(YYY,CCC,FFF) 'Socio-economic grid tariffs for INDHEAT'   ;
*Data is based on Energinet and Ea, see also 82524 Futuregas\Socio-economic tariff from EA

SOCIOTARIFF_INDHEAT(Y,C,'ELECTRIC')=240/7.465;
SOCIOTARIFF_INDHEAT(Y,C,'NATGAS')=12/7.465*3.6;
SOCIOTARIFF_INDHEAT(Y,C,'BIONG')=12/7.465*3.6;