SET S(SSS)  'Seasons in the simulation'
/
$ifi %limitST%==yes     S01,S02 ,s03
$ifi not %limitST%==yes S01*S52
/;


display "S.inc:", S  ;
