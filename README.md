# MIS11c_exps

Cheatsheet of the naming of all runs presented in the manuscript.

For the orignal forcing data and transient signals, the reader is referred to their original publications.

For model output, please request the data to the corresponding authors, since the data is too large.



##                      1 - CALIBRATION AND SPINUP

- Calbration stage, where we obtain the basal conditions for sliding and melting given PI conditions: `sico_specs_a20_cal[1234]_ccsm3_pi.h`

- Final calibration stage, where the geometry is allowed to evolve: `sico_specs_a20_cal5_ccsm3_pi_0[12].h`

- Chosen ensemble member of the basal-melt parameters tuning, where we prescribe fixed values for melting at the Grounding Line and ice-shelf base derived from the calibration (see Methods in the main text): `sico_specs_a20_cal6_ccsm3_pi_ssfm03.h`

- First spinup to place the ice sheet at 620 ka: `sico_specs_a20_mis11_ccsm3_init00a.h`
- Thermal spinup: `sico_specs_a20_mis11_ccsm3_therma2_init00a.h`



##                      2 - DIFFERENT ENSEMBLES

### CFEN
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3.h` (EDC-forced)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edf.h` (DF-forced)
- `sico_specs_a20_mis11_ccsm3_425_394ka_lr04.h` (LR04-forced)
- `sico_specs_a20_mis11_ccsm3_425_394ka_vos.h` (Vostok-forced)

### SSEN
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3rsclgma.h` (using the average as opposed to the peak value during the LGM)
- `sico_specs_a20_mis11_ccsm3_425_394ka_lr04rsclgma.h` (using the average as opposed to the peak value during the LGM)


### RSEN
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3lp1bx.h` (1 kyr low-pass box filter)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3lp3bx.h` (3 kyr low-pass box filter)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3lp5bx.h` (5 kyr low-pass box filter)

### SLEN
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3_s16l.h` (using the "long" sea-level reconstruction from Spratt & Lisiecki, 2016)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3_s16s.h` (using the "short" sea-level reconstruction from Spratt & Lisiecki, 2016)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3_s16u.h` (using the upper boundary of the "short" sea-level reconstruction from Spratt & Lisiecki, 2016)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3_spm.h` (using the SPECMAP sea-level reconstruction from Imbrie et al., 1989)
- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3_wae.h` (using the sea-level reconstruction from Waelbroeck et al., 2002)

### SGSEN
- Creation of the ancillary geometry (based on the thermal spinup necessary, i.e., runs that needed a spinup to end before 425 ka):
	- `sico_specs_a20_mis11_ccsm3_rlxg430ka_gmt1`
	- `sico_specs_a20_mis11_ccsm3_rlxg425ka_gmt1`
- All SGSEN names follow the pattern:
	- `sico_specs_a20_mis11_ccsm3_4[23][05]_394ka_FORCINGgmt[123].h` where the forcing is as in the CFEN runs, and the starting (relaxation) year as in the main text.




##                      3 - SUPPLEMENTARY EXPERIMENTS


### Discussion section (Fig. 10): 

- `discussion_thresholds` folder

	- EDC at 416 ka (GI) conditions: `sico_specs_a20_mis11_ccsm3_416_394ka_edc3cc.h`
	- EDC at 410 ka (GI) conditions: `sico_specs_a20_mis11_ccsm3_410_394ka_edc3cc.h`
	- Vostok at 410 ka (GI) conditions: `sico_specs_a20_mis11_ccsm3_410_394ka_vosppc21.h`
	- Vostok at 411 ka (GI) conditions: `sico_specs_a20_mis11_ccsm3_410_394ka_vosppc16.h`


### Supplementary Material

- Comparison between CESM1.2 and CCSM3: `cesm_racmo_comp` folder

	- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3_ce**.h` where * is the variable from CESM1.2. The same coding is valid for one and two variable experiments:
	- air [t]emperature 
	- [o]cean temperature 
	- [p]recipitation
	- calibrated basal [s]liding 

	- `sico_specs_a20_mis11_cesm_425_394ka_edc3.h` uses full CESM1.2 forcing
	- `sico_specs_a20_mis11_racmoccsm3_425_394ka_edc3.h` uses RACMO2 for modern temperature and precipitation, and CCSM3 for the remaining variables
	- `sico_specs_a20_mis11_racmocesm_425_394ka_edc3.h` uses RACMO2 for modern temperature and precipitation, and CESM1.2 for the remaining variables.


- Different ocean lags: `ocean_lags` folder
	- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3lo*.h` where * is the time in years that the ocean GI lags the atmospheric GI

- Weakened ocean forcing: `weakened_ocean` folder
	- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3dmp01.h` ocean GI amplitude is weakened by 50%
	- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3dto05.h` dT of -0.5 deg.C is applied to the ocean
	- `sico_specs_a20_mis11_ccsm3_425_394ka_edc3dto10.h` dT of -1.0 deg.C is applied to the ocean

- Different resolution tests: `resolution_tests` folder
	- `sico_specs_a10_mis11_ccsm3_jb_zl_nrj.h` nudges bedrock from 20 km to XX km resolution (in this case 10 km) if given the higher resolution bedrock as input
	- `sico_specs_aXX_mis11_ccsm3_jb_full_nrj_rbd.h` runs the higher-resolution experiments under the same forcing as the EDC CFEN member.

================================================================================

Folder `tcd_submission` contains original header files of the first submission to TC Discussions.
