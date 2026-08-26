$if     EXIST '../data/EMI_POLNA_%SCNAME%.inc' $INCLUDE         '../data/EMI_POLNA_%SCNAME%.inc';
$if not EXIST '../data/EMI_POLNA_%SCNAME%.inc' $INCLUDE '../../base/data/EMI_POLNA_%SCNAME%.inc';
