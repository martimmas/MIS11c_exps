# MIS11c_exps
Cheatsheet of the naming of all runs presented in the manuscript.

For the orignal forcing data and transient signals, the reader is referred to their original publications.

================================================================================
                      1 - CALIBRATION AND SPINUP
================================================================================
Calbration stage, where we obtain the basal conditions for sliding and melting given PI conditions: sico_specs_a20_cal[1234]_ccsm3_pi.h

Final calibration stage, where the geometry is allowed to evolve: sico_specs_a20_cal5_ccsm3_pi_0[12].h

Chosen ensemble member of the basal-melt parameters tuning, where we prescribe fixed values for melting at the Grounding Line and ice-shelf base derived from the calibration (see Methods in the main text): sico_specs_a20_cal6_ccsm3_pi_ssfm03.h

First spinup to place the ice sheet at 620 ka: sico_specs_a20_mis11_ccsm3_init00a.h
Thermal spinup: sico_specs_a20_mis11_ccsm3_therma2_init00a.h
Surface relaxation: sico_specs_a20_mis11_ccsm3_rlxt425_init00a.h


================================================================================
                      2 - DIFFERENT ENSEMBLES
================================================================================
SSEN
sico_specs_a20_mis11_ccsm3_420_374ka_lr04rsc.h (using the last 10 kyr as opposed to PI)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3rschol.h (using the last 10 kyr as opposed to PI)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3rsclgma.h (using the average as opposed to the peak value during the LGM)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3rschollgma.h (combining both listed above)

CFEN
sico_specs_a20_mis11_ccsm3_420_374ka_edc3.h (EDC-forced)
sico_specs_a20_mis11_ccsm3_420_374ka_edf.h (EDF-forced)
sico_specs_a20_mis11_ccsm3_420_374ka_lr04.h (LR04-forced)
sico_specs_a20_mis11_ccsm3_420_374ka_vos.h (Vostok-forced)

RSEN
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_lp1.h (1 kyr low-pass)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_lp3.h (3 kyr low-pass)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_lp5.h (5 kyr low-pass)

SLEN
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_b08.h (using the sea-level reconstruction from Bintanja & van de Wal, 2008)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_s16l.h (using the "long" sea-level reconstruction from Spratt & Lisiecki, 2016)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_s16s.h (using the "short" sea-level reconstruction from Spratt & Lisiecki, 2016)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_s16l.h (using the upper boundary of the "short" sea-level reconstruction from Spratt & Lisiecki, 2016)
sico_specs_a20_mis11_ccsm3_420_374ka_edc3_spm.h (using the sea-level reconstruction from Imbrie et al., 1989)

SGEN
All names follow the pattern:
sico_specs_a20_mis11_ccsm3_420_374ka_FORCINGgmt[123].h

where the forcing is as in the CFEN runs (edc3rsc refers to the 'edc3rschollgma' run, as also noted in the main text) and the gmt[1-3] also follows as in Table 3 in the main text.


================================================================================
                      3 - SUPPLEMENTARY EXPERIMENTS
================================================================================

Vostok at 2.1 oC (GI) conditions: sico_specs_a20_mis11_ccsm3_410_374ka_vos*ppc.h (gmt coding as in SGEN)
Vostok at 1.6 oC (GI) conditions: sico_specs_a20_mis11_ccsm3_410_374ka_vosppc16.h
