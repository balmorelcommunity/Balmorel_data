
$if     EXIST '../data/FUELPRICE_%SCNAME%.inc' $INCLUDE         '../data/FUELPRICE_%SCNAME%.inc';
$if not EXIST '../data/FUELPRICE_%SCNAME%.inc' $INCLUDE '../../base/data/FUELPRICE_%SCNAME%.inc';
