PARAMETER INDHEAT_ANNUITYCG(CCC,INDHEAT_GGG) 'Transforms investment to annual payment (fraction)'         
;                                                                                                         
                                                                                                          
* Interest rate assumption: 4%                                                                            
* Loan repayment assumption: lifetime of the technology if lifetime is higher than 20 years, else 20 years
INDHEAT_ANNUITYCG(C,INDHEAT_G)=1/((1-(1+0.04)**(MAX(-INDHEAT_GDATA(INDHEAT_G,'GDLIFETIME'),-20)))/0.04);  
