$if     EXIST '../data/EMI_POL_%SCNAME%.inc' $INCLUDE         '../data/EMI_POL_%SCNAME%.inc';
$if not EXIST '../data/EMI_POL_%SCNAME%.inc' $INCLUDE '../../base/data/EMI_POL_%SCNAME%.inc';
