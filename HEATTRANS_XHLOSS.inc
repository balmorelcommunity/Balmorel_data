PARAMETER XHLOSS(IAAAE,IAAAI)       "Heat transmission loss between areas (calculated from exported quantity) (share)";


XHLOSS(IAE,IAI)$(SUM(Y,XHINVCOST(Y,IAE,IAI)) OR SUM(Y,(XHKFX(Y,IAE,IAI))))= 0.1;

