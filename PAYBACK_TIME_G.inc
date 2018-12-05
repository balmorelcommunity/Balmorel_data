PARAMETER PAYBACK_TIME_G(G)          "Payback time of the loan for generation technologies (years)";        
* Loan repayment assumption: lifetime of the technology if lifetime is higher than 20 years, else 20 years  
PAYBACK_TIME_G(G)=MIN(GDATA(G,'GDLIFETIME'),20);                                                            
