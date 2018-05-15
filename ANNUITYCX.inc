PARAMETER ANNUITYCX(CCC) 'Transforms investment to annual payment (fraction)'
;                                                                            
* Interest rate assumption: 6%                                               
* Loan repayment  assumption for all the lines: 20 YEARS                     
                                                                             
ANNUITYCX(CCC)=1/((1-(1+0.06)**(-20))/0.06);                                 
                                                                             
                                                                             
                                                                             
                                                                             
