SET T(TTT)  'Time periods within a season in the simulation'
/
$ifi %limitST%==yes     T001,T002 ,T003
$ifi not %limitST%==yes T001*T168
/;

display "T.inc:", T  ;
