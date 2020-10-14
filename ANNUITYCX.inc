PARAMETER ANNUITYCX(CCC) 'Transforms investment to annual payment (fraction)'
;
* Interest rate assumption: Socio-economic discount rate: 0.0325
* Loan repayment  assumption for all the lines: 40 YEARS

ANNUITYCX(CCC)=1/((1-(1+0.0325)**(-40))/0.0325);

$ontext
$offtext


