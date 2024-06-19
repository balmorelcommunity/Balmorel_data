PARAMETER XMAXINV(IRRRE,IRRRI)   'Max accummulation in transmission capacity between two regions for each simulated year'                                                                                                                                                                                           
/                                                                                                                                                               
/;                     

* The following assumptions assumes that model years are decades (10 years) apart, i.e. an assumption of max accummulated 1200 MW pr. line pr. year
* It also corresponds to not more than double the existing capacities 
XMAXINV(IRRRE,IRRRI) = 12000;