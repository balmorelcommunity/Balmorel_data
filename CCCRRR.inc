SET CCCRRR(CCC,RRR) "Regions in countries"
/
DENMARK                                                .    DK2
$ifi  %limitCRA%==''  DENMARK                                                .    DK1
$ifi NOT %limitCRA%==DK  NORWAY                                              .    NO1

$ifi  %limitCRA%=='' NORWAY                                                 .    NO2
$ifi  %limitCRA%=='' NORWAY                                                 .    NO3
$ifi  %limitCRA%=='' NORWAY                                                 .    NO4
$ifi  %limitCRA%=='' NORWAY                                                 .    NO5
$ifi  NOT %limitCRA%=='' $goto endofCR

FINLAND                                                .    FIN
GERMANY                                                .    DE4-E
GERMANY                                                .    DE4-N
GERMANY                                                .    DE4-S
GERMANY                                                .    DE4-W
NETHERLANDS                                            .    NL
ESTONIA                                                .    EE
LATVIA                                                 .    LV
LITHUANIA                                              .    LT
POLAND                                                 .    PL
SWEDEN                                                 .    SE1
SWEDEN                                                 .    SE2
SWEDEN                                                 .    SE3
SWEDEN                                                 .    SE4
UNITED_KINGDOM                                         .    UK
BELGIUM                                                .    BE
FRANCE                                                 .    FR
$label endofCR
/;

