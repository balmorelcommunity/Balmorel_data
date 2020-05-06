PARAMETER INDHEAT_MAXDEMAND(YYY,INDHEAT_AAA,INDHEAT_GROUP)       'Max demand that can be served by a group (MWh)';                
*The numbers are assumed based on the figure 6 and table 3 in: https://www.sciencedirect.com/science/article/pii/S0360544216311100
*The 1400000 TWh is used by finding around 5PJ used in 2050 for all of DK and converting this to MWh (and rounding)               
INDHEAT_MAXDEMAND(Y,'DK2_NoDH_ind','GR_HPB2W') =  1400000*4800000/(4800000+6700000);                                              
INDHEAT_MAXDEMAND(Y,'DK1_NoDH_ind','GR_HPB2W') =  1400000*6700000/(4800000+6700000);                                              
