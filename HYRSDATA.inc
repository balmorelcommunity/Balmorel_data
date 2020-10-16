*                                                                                                                                                                                                 HYRSDATA(AAA,HYRSDATASET,SSS) 'Data for hydro with storage'
*
*
*
*                                                                                                                                                   HYRSDATA: all values are entered as fractions HYRSDATA: all values are entered as fractions

TABLE HYRSDATA(AAA,HYRSDATASET,SSS) 'Data for hydro with storage'
                                                                                                                                                                                                                                                                                                               S01   S02   S03   S04   S05   S06   S07   S08   S09   S10   S11   S12   S13   S14   S15   S16   S17   S18   S19   S20   S21   S22   S23   S24   S25   S26   S27   S28   S29   S30   S31   S32   S33   S34   S35   S36   S37   S38   S39   S40   S41   S42   S43   S44   S45   S46   S47   S48   S49   S50   S51   S52
HSTAN_A1                                                                                                                                            .                                             HYRSMINVOL                                                                                                   0.4   0.371 0.365 0.34  0.321 0.301 0.274 0.246 0.221 0.199 0.175 0.169 0.154 0.176 0.166 0.162 0.176 0.19  0.21  0.227 0.276 0.338 0.417 0.46  0.473 0.484 0.493 0.515 0.538 0.536 0.528 0.516 0.505 0.498 0.522 0.525 0.515 0.508 0.508 0.526 0.533 0.53  0.539 0.555 0.576 0.589 0.572 0.544 0.516 0.485 0.455 0.43
HSTAN_A1                                                                                                                                            .                                             HYRSMAXVOL                                                                                                   0.861 0.825 0.786 0.778 0.763 0.735 0.708 0.673 0.638 0.599 0.583 0.585 0.591 0.575 0.555 0.527 0.512 0.511 0.52  0.561 0.617 0.683 0.73  0.772 0.8   0.822 0.832 0.872 0.889 0.911 0.925 0.932 0.957 0.96  0.954 0.948 0.948 0.951 0.956 0.941 0.929 0.93  0.914 0.925 0.923 0.932 0.917 0.895 0.888 0.898 0.9   0.915
;

* If there are less than half of the seasons in the simulation, use less restricted values
$ifi %RELAX_HYDROSTORAGE%==YES HYRSDATA(AAA,HYRSDATASET,SSS)$((CARD(S) < 26) AND HYRSDATA(AAA,HYRSDATASET,SSS)) = HYRSDATA('HSTAN_A1',HYRSDATASET,SSS);
