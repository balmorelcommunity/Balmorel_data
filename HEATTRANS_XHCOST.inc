PARAMETER XHCOST(IAAAE,IAAAI)  "Heat transmission cost between areas (calculated from exported quantity) (Money/MWh)";


XHCOST(IAE,IAI)$(SUM(Y,XHINVCOST(Y,IAE,IAI))  OR SUM(Y,(XHKFX(Y,IAE,IAI))))= 0.0001;

