!+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
!                   Specification file sico_specs_runname.h
!+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

!-------- Basic settings --------

#define RUNNAME      'a20_mis11_ccsm3_rlxt425_init00a'
!                      Name of simulation

#define SICO_VERSION '3.2-dev'
!                      Version number of SICOPOLIS

#define INPATH       '/home/mbraga/sicopolis/data/input/sico_in'
!                      Directory for SICOPOLIS input
!                      (no '/' at the end!)

#define OUTPATH      '/home/mbraga/sicopolis/data/output/sico_out/a20_mis11_ccsm3_rlxt425_init00a'
!                      Directory for SICOPOLIS output
!                      (no '/' at the end!)

!-------- Domain --------

#define ANT
!                      Simulated domain:
!                        ANT      - Antarctica
!                        GRL      - Greenland
!                        ASF      - Austfonna
!                        NHEM     - Northern hemisphere
!                        SCAND    - Scandinavia
!                        TIBET    - Tibet
!                        EMTP2SGE - EISMINT Phase 2 Simplified Geometry Experiment
!                        HEINO    - ISMIP HEINO
!                        NMARS    - North polar cap of Mars
!                        SMARS    - South polar cap of Mars

!-------- Physical parameter file --------

#define PHYS_PARA_FILE 'phys_para_ant_cp.dat'
!                       Name of the file containing the physical parameters

![S]----- Type of grid, spatial resolution --------

#define GRID 0
!                         0 : Cartesian coordinates in the stereographic plane
!                             without distortion correction
!                         1 : Cartesian coordinates in the stereographic plane
!                             with distortion correction
!                         2 : Geographical coordinates (longitude/latitude)
!                             [not allowed for this application]

#define X0  -2.80d+03
!                       x coordinate (in km) of the origin point (i,j) = (0,0),
!                       for GRID==0 or GRID==1

#define Y0  -2.80d+03
!                       y coordinate (in km) of the origin point (i,j) = (0,0),
!                       for GRID==0 or GRID==1

#define DX   2.00d+01
!                       Horizontal grid spacing in km, for GRID==0 or GRID==1:
!
!                         40 km requires IMAX= 150 and JMAX= 150
!                         30 km requires IMAX= 200 and JMAX= 600
!                         25 km requires IMAX= 240 and JMAX= 240
!                         24 km requires IMAX= 250 and JMAX= 250
!                         20 km requires IMAX= 300 and JMAX= 300
!                         16 km requires IMAX= 375 and JMAX= 375
!                         15 km requires IMAX= 400 and JMAX= 400
!                         12 km requires IMAX= 500 and JMAX= 500
!                         10 km requires IMAX= 600 and JMAX= 600
!                         08 km requires IMAX= 750 and JMAX= 750
!                         06 km requires IMAX=1000 and JMAX=1000
!                         05 km requires IMAX=1200 and JMAX=1200
!                         04 km requires IMAX=1500 and JMAX=1500
!                         03 km requires IMAX=2000 and JMAX=2000
!                         02 km requires IMAX=3000 and JMAX=3000
!                         01 km requires IMAX=6000 and JMAX=6000

#define IMAX  300
!                       IMAX+1: number of grid points in x-direction
!                               (i=0...IMAX)

#define JMAX  300
!                       JMAX+1: number of grid points in y-direction
!                               (j=0...JMAX)

#define KCMAX  80
!                       KCMAX+1: number of grid points in z-direction
!                                in cold ice (kc=0...KCMAX)

#define KTMAX   2
!                       KTMAX+1: number of grid points in z-direction
!                                in temperate ice (kt=0...KTMAX)

#define KRMAX  40
!                       KRMAX+1: number of grid points in z-direction
!                                in the bedrock (kr=0...KRMAX)

#define DEFORM  2.00d+00
!                       Exponential stretch parameter of the non-equidistant
!                       grid in z-direction in cold ice
!                       (0.0d0 produces an equidistant grid)

![S]----- Initial and final times, time steps --------

#define YEAR_ZERO    2000.0d0
!                       SICOPOLIS year zero in astronomical year numbering
!                       [ = signed year CE (AD) ]

!!!!! NOTE: All time quantities below refer to the SICOPOLIS calendar. !!!!!

#define TIME_INIT0   -4.25d+05
!                       Initial time of simulation (in a)

#define TIME_END0    -4.20d+05
!                       Final time of simulation (in a)

#define DTIME0       1.00d+00
!                       Time step (in a) for computation of velocity
!                       and topography

#define DTIME_TEMP0  1.00d+00
!                       Time step (in a) for computation of temperature,
!                       water content and age of the ice

#define DTIME_WSS0   1.00d+02
!                       Time step (in a) for computation of isostatic
!                       steady-state displacement of the lithosphere
!                       (only for REBOUND==2, ELRA model)

#define DTIME_SLD0   2.00d+00
!                       Time step (in a) for inversion and/or averaging of
!                       sliding coefficients (SLD_MODE==1, SLD_AVE_XXX==1)

#define DTIME_ENH0   1.11d+11
!                       Time step (in a) for inversion and averaging of
!                       enhancement factors (ENHMOD==7, ENH_AVE_XXX==1)

#define DTIME_OCN0   1.00d+00
!                       Time step (in a) for inversion of ocean-induced
!                       basal melting rates (only for QBM_MODE==1)

#define DTIME_GHF0   1.11d+11
!                       Time step (in a) for inversion of geothermal
!                       heat flux (only for Q_GEO_MOD==3)

#define DTIME_STRCALV0 5.00d+01
!                       Time step (in a) for strong calving events
!                       that 'trim' the ice shelves 
!                       (only for STRONG_CALVING== 1 or 2)

#define DTIME_SER0   1.00d+02
!                       Time step (in a) for writing of data to
!                       the time-series files '.ser' and '.thk'

#define YEAR_SEC 31556926.0d0
!                       Conversion from years to seconds

![S]----- Ice sheet dynamics --------

#define DYNAMICS 2
!                         0 : Ice flow velocity set to zero everywhere
!                             (static ice)
!                         1 : SIA for grounded ice,
!                             SSA for floating ice (if existing)
!                         2 : SIA for grounded ice,
!                             SIA/SStA hybrid for ice streams,
!                             SSA for floating ice (if existing)

#define HYB_MODE 4
!                         Combination of SIA and SSA velocities based on (only
!                         for DYNAMICS==2):
!                         0 : Greve  : slip ratio of grounded ice
!                         1 : Jueler : SIA weighting function
!                         2 : Bueler : SSA weighting function (non-sliding SIA)
!                         3 : Winkel : sum of non-sliding SIA and SSA velocities
!                         4 : Tinkel : sum of weighted (Bueler) non-sliding SIA
!                                      and unweighted SSA velocities

#define RATIO_SL_THRESH  0.00d-00
!                         Threshold value for the slip ratio of grounded ice.
!                         If the slip ratio is larger, ice stream dynamics
!                         is employed (only for DYNAMICS==2, HYB_MODE<=1).

#define HYB_REF_SPEED    3.00d+01
!                         Scaling reference speed for Bueler 2009 method
!                         (in m/y, only for DYNAMICS==2, HYB_MOD==1,2,4).

#define SCHOOF_GL 0
!                         Grounding line dynamics:
!                         0 : No special treatment
!                         1 : Schoof's flux parametrization

!-------- Ice sheet thermodynamics --------

#define CALCMOD 3
!                        -1 : ISOT: isothermal method,
!                                   constant temperature and age
!                         0 : COLD: cold-ice method, resetting of temperatures
!                                   above pressure melting
!                         1 : POLY: polythermal method,
!                                   separate domains for cold and temperate ice
!                         2 : ENTC: conventional enthalpy method
!                         3 : ENTM: melting-CTS enthalpy method
!
!                             For CALCMOD == -1, 0, 2, 3,
!                             the kt domain is redundant,
!                             therefore KTMAX==2 is recommended

#define TEMP_CONST  -1.00d+01
#define AGE_CONST    0.00d+00
!                         Prescribed temperature and age
!                         (only for ISOT; CALCMOD==-1)

#define CTS_MELTING_FREEZING 2
!                         Treatment of the transition conditions at the CTS
!                         (only for POLY; CALCMOD==1):
!                         1 : Melting and freezing conditions distinguished
!                         2 : Always melting conditions assumed

!-------- Ice margin treatment --------

#define MARGIN 3
!                         1 : Ice extent strictly restricted to land area
!                         2 : Formation of marine ice possible
!                         3 : Formation of marine ice and ice shelves possible

#define MARINE_ICE_FORMATION 1
!                         1 : No special mechanism for the formation of marine ice
!                             (only for MARGIN==2)
!                         2 : Formation of marine ice via "underwater ice"
!                             (only for MARGIN==2)

#define MARINE_ICE_CALVING 1
!                         1 : Unlimited expansion of marine ice, no calving
!                             (only for MARGIN==2)
!                         2 : Limited expansion of marine ice,
!                             constant value z_mar=Z_MAR for the minimum elevation
!                             of the isostatically relaxed bedrock
!                             (only for MARGIN==2)
!                         3 : Limited expansion of marine ice,
!                             constant value z_mar=Z_MAR for the minimum bedrock
!                             elevation (only for MARGIN==2)
!                         4 : Limited expansion of marine ice,
!                             minimum elevation of the isostatically relaxed bedrock
!                             z_mar proportional to sea-level stand
!                             (only for MARGIN==2)
!                         5 : Limited expansion of marine ice,
!                             minimum bedrock elevation z_mar proportional to
!                             sea-level stand (only for MARGIN==2)
!                         6 : Limited expansion of marine ice,
!                             minimum elevation of the isostatically relaxed bedrock
!                             z_mar related to sea-level stand by the piecewise
!                             linear relation proposed by Zweck and Huybrechts (2005)
!                             (only for MARGIN==2)
!                         7 : Limited expansion of marine ice,
!                             minimum bedrock elevation z_mar related to sea-level
!                             stand by the piecewise linear relation proposed by
!                             Zweck and Huybrechts (2005) (only for MARGIN==2)
!                         9 : Calving of marine ice by calving law for
!                             "underwater ice"
!                             (only for MARGIN==2 and MARINE_ICE_FORMATION==2)

#define Z_MAR         0.00d+00
!                         Minimum elevation (in m) of the isostatically relaxed
!                         bedrock allowed to glaciate
!                         (for MARGIN==2 and MARINE_ICE_CALVING==2)
!                         Minimum bedrock elevation (in m) allowed to glaciate
!                         (for MARGIN==2 and MARINE_ICE_CALVING==3)

#define FACT_Z_MAR    2.50d+00  /* suitable value for MARGIN==2 and MARINE_ICE_CALVING==4,5 */
!                         Minimum bedrock elevation or
!                         minimum elevation of the isostatically relaxed bedrock
!                         allowed to glaciate:
!                         proportionality factor to sea-level stand
!                         (for MARGIN==2 and MARINE_ICE_CALVING==4,5),
!                         modification factor for the piecewise linear
!                         relation by Zweck and Huybrechts (2005)
!                         (for MARGIN==2 and MARINE_ICE_CALVING==6,7)

#define CALV_UW_COEFF 1.00d-04
!                         Calving coefficient for "underwater ice",
!                         in m^(1-r1-r2)*a^(-1) (for MARGIN==2,
!                         MARINE_ICE_FORMATION==2 and MARINE_ICE_CALVING==9)

#define R1_CALV_UW    1.00d+00
!                         Exponent r1 of the ice thickness
!                         for the calving law for "underwater ice"
!                         (for MARGIN==2,
!                         MARINE_ICE_FORMATION==2 and MARINE_ICE_CALVING==9)

#define R2_CALV_UW    1.00d+00
!                         Exponent r2 of the sea depth
!                         for the calving law for "underwater ice"
!                         (for MARGIN==2,
!                         MARINE_ICE_FORMATION==2 and MARINE_ICE_CALVING==9)

#define ICE_SHELF_CALVING 2
!                         1 : Unlimited expansion of ice shelves, no calving
!                             (only for MARGIN==3)
!                         2 : Instantaneous calving of ice shelves if the
!                             thickness is less than H_CALV (only for MARGIN==3)

#define STRONG_CALVING 0
!                         0 : No 'strong calving' of ice shelves
!                         1 : 'Strong calving' of ice shelves
!                         2 : 'Strong calving' based on galcial index varying
!                             the amount of calving between H_CALV and H_CALV_STR

#define H_CALV        5.00d+01
!                         Threshold thickness (in m) of ice shelves for calving
!                         (for MARGIN==3 and ICE_SHELF_CALVING==2)

#define H_CALV_STR    5.00d+01
!                         Threshold thickness (in m) of ice shelves for calving
!                         (for MARGIN==3 and ICE_SHELF_CALVING==2 and 
!                         STRONG_CALVING==1 or 2)

#define Z_CALV       -1.60d+03
!                       Threshold seabed elevation separating
!                       the continental shelf from the abyssal ocean, in m,
!                       where ice shelves are automatically calved out

!-------- Flow law --------

#define FLOW_LAW 1
!                         1 : Glen's flow law with stress exponent n=3
!                         2 : Goldsby-Kohlstedt flow law with stress exponent
!                             n=1.8 and grain-size exponent p=1.4
!                         3 : Durham's flow law with stress exponent n=4
!                         4 : Smith-Morland (polynomial) flow law

#define FIN_VISC 2
!                         1 : Unmodified flow law with infinite viscosity
!                             for low strain rates
!                             (only for FLOW_LAW==1, 2, 3)
!                         2 : Modified flow law with additional
!                             finite-viscosity parameter SIGMA_RES
!                             (only for FLOW_LAW==1, 2, 3)

#define GR_SIZE   1.00d-03
!                         Average grain size (in m; only for FLOW_LAW==2)

#define SIGMA_RES 1.00d+04
!                         Residual stress (finite-viscosity contribution)
!                         in the creep response function
!                         (in Pa; only for FLOW_LAW==1, 2, 3 and FIN_VISC==2)

![S]----- Flow enhancement factor --------

#define ENHMOD 1
!                         1 : Flow enhancement factor enh=ENH_FACT everywhere
!                             in grounded ice
!                         2 : enh=ENH_INTG for ice younger than AGE_TRANS_0
!                             (Holocene ice),
!                             enh=ENH_FACT for ice older than AGE_TRANS_0
!                             (Pleistocene ice);
!                             for present-day steady-state simulations
!                         3 : enh=ENH_INTG for Holocene and Eemian ice,
!                             enh=ENH_FACT for Weichselian and pre-Eemian ice
!                             (as defined by the times DATE_TRANS1_0,
!                             DATE_TRANS2_0 and DATE_TRANS3_0);
!                             for transient scenarios
!                         4 : Anisotropic flow enhancement factor (quadratic
!                             function of the shear fraction) for grounded ice,
!                             between ENH_COMPR (for compression) and
!                             ENH_SHEAR (for shear)
!                         5 : Anisotropic flow enhancement factor (quadratic
!                             function of the shear fraction) for grounded and
!                             floating ice,
!                             between ENH_COMPR (for compression) and
!                             ENH_SHEAR (for shear)
!                         6 : Spatially varying enhancement factors read
!                             from file
!                         7 : Inversion of enhancement factors.
!                             Initial value depends on option ENH_INIT.
!                             If ENH_MASK_FILE/='none', then the
!                             inversion will operate only in grid points
!                             according to that mask.

#define ENH_FACT    1.00d+00
!                         Flow enhancement factor (only for ENHMOD==1, 2, 3)

#define ENH_INTG    1.00d+00
!                         Separate flow enhancement factor for interglacial ice
!                         (only for ENHMOD==2, 3)

#define ENH_COMPR   3.00d+00
!                         Flow enhancement factor for compression
!                         (only for ENHMOD==4, 5)

#define ENH_SHEAR   8.00d+00
!                         Flow enhancement factor for shear
!                         (only for ENHMOD==4, 5)

#define ENH_SHELF   1.00d+00
!                         Separate flow enhancement factor for floating ice
!                         (only for ENHMOD==1, 2, 3, 4 and MARGIN==3)

#define ENH_INIT 0
!                       Initial values of enhancement factors given by:
!                       0 : ENH_FILE (if /= 'none') or ENH_[FACT/SHELF]
!                       1 : Final enh_inv from previous run (only for
!                           ANF_DAT==3). In this case, check that the
!                           initial file contains enh_inv! (Was only
!                           written if ENHMOD==7 in previous run)

#define ENH_FILE      'none'
!                       Name of the file containing the spatially varying
!                       enhancement factors

#define ENH_MASK_FILE 'none'
!                       Name of the file containing the mask for the
!                       enhancement inversion (only for ENHMOD==7)

#define ENH_SCL     5.00d+03
!                       Scaling constant for inversion procedure,
!                       in m (only for ENHMOD==7). This is implemented in
!                       order to avoid overshots during the inversion.

#define ENH_MAX     1.00d+00
#define ENH_MIN     1.00d+00
#define ENH_MAX_SH  1.00d+00
#define ENH_MIN_SH  1.00d+00
!                       Lower and upper limits of the enhancement
!                       factor enh_inv during inversion (only for
!                       ENHMOD==7)

#define ENH_AVE_GLG 0
!                       Enhancement factors at the grounding line.
!                       GLG = grounded side
!                       0 : Keep inputed/inverted values
!                       1 : Computed as the average of surrounding
!                           enhancement factors. This averaging is
!                           performed according to DTIME_ENH0

#define ENH_AVE_ALL 0
!                       Smoothing of enhancement factors:
!                       0 : No smoothing
!                       1 : Five-point weighted median filter. The
!                           weight is given by ENH_AVE_REG. This
!                           smoothing is performed according to DTIME_ENH0

#define ENH_AVE_REG  1.0d-02
!                       Weighting for the smoothing of enhancement factors
!                       It can take values between 0.0 (no smoothing) and
!                       1.0 (equal-weight smoothing) (only for ENH_AVE_ALL==1)

#define AGE_TRANS_0     11000.0d0
!                         Age of the Holocene/Pleistocene transition
!                         (in a; only for ENHMOD==2)

#define DATE_TRANS1_0 -132000.0d0
!                         Time of the pre-Eemian/Eemian transition
!                         (in a; only for ENHMOD==3)

#define DATE_TRANS2_0 -114500.0d0
!                         Time of the Eemian/Weichselian transition
!                         (in a; only for ENHMOD==3)

#define DATE_TRANS3_0  -11000.0d0
!                         Time of the Weichselian/Holocene transition
!                         (in a; only for ENHMOD==3)

!-------- Initial conditions --------

#define ANF_DAT 3
!                         1 : Present initial topography
!                         2 : Ice-free initial topography with
!                             relaxed lithosphere
!                         3 : Initial values from previous
!                             simulation

#define ZS_PRESENT_FILE   'ant_rg_20_zs.dat'
!                             Name of the file containing the initial
!                             ice-surface topography

#define ZB_PRESENT_FILE   'ant_rg_20_zb.dat'
!                             Name of the file containing the initial
!                             ice-base topography (only for ANF_DAT==1)

#define ZL_PRESENT_FILE   'ant_rg_20_zl.dat'
!                             Name of the file containing the initial
!                             lithosphere-surface topography
!                             (only for ANF_DAT==1)

#define ZL0_FILE          'ant_rg_20_zl0_elra.dat'
!                             Name of the file containing the topography
!                             of the relaxed lithosphere surface

#define MASK_PRESENT_FILE 'ant_rg_20_mask.dat'
!                             Name of the file containing the initial
!                             ice-land-ocean mask

#define TEMP_INIT 1
!                         Initial ice temperature conditions
!                         (only for ANF_DAT==1):
!                         1 : Constant value in the entire ice sheet
!                         2 : In each ice column equal to the
!                             local ice surface temperature
!                         3 : Ice temperature linearly increasing with depth
!                         4 : Ice-temperature profiles from analytical solution
!                             for 1-d steady-state advection-diffusion equation
!                             under the assumption of linearly varying vz

#define ANFDATNAME 'a20_mis11_ccsm3_therma2_init00a0008.nc'
!                             Initial-value file (only for ANF_DAT==3)

#define ANFDATPATH '/home/mbraga/sicopolis/sico_init'
!                             Directory for initial-value file
!                             (no '/' at the end!)

![S]----- Reference topography --------

#define ZS_REF_FILE   'ant_rg_20_zs.dat'
!                             Name of the file containing the reference
!                             ice-surface topography

#define ZB_REF_FILE   'ant_rg_20_zb.dat'
!                             Name of the file containing the reference
!                             ice-base topography (only for ANF_DAT==1)

#define ZL_REF_FILE   'ant_rg_20_zl.dat'
!                             Name of the file containing the reference
!                             lithosphere-surface topography

#define ZS_TEMP_FILE  'ant_jb_20_el_ccsm3_mis11_420ka.dat'
!                             Name of the file containing the reference
!                             ice-surface topography for temperature data

!-------- Lithosphere (bedrock) modelling --------

#define REBOUND 2
!                         0 : No bedrock adjustment
!                         1 : Isostatic bedrock adjustment with local
!                             lithosphere and relaxing asthenosphere (LLRA model)
!                         2 : Isostatic bedrock adjustment with elastic
!                             lithosphere and relaxing asthenosphere (ELRA model)

#define FRAC_LLRA 1.00d+00
!                             Fraction of isostatic compensation in the LLRA
!                             model (REBOUND==1). Range 0 <= FRAC_LLRA <= 1;
!                             0: no bedrock adjustment, 1: full adjustment.

#define TIME_LAG_MOD 1
!                         1 : Constant value for the time lag of the
!                             relaxing asthenosphere (for REBOUND==1,2)
!                         2 : Spatially varying time lag of the relaxing
!                             asthenosphere read from file (for REBOUND==1,2)

#define TIME_LAG  1.00d+03
!                         Time lag of the relaxing asthenosphere (in a)
!                         (for TIME_LAG_MOD==1)

#define TIME_LAG_FILE 'none'
!                         Name of the file containing the time lag of the
!                         relaxing asthenosphere (for TIME_LAG_MOD==2)

#define FLEX_RIG_MOD 1
!                         1 : Constant value for the flexural rigidity of the
!                             lithosphere (for REBOUND==2)
!                         2 : Spatially varying flexural rigidity of the
!                             lithosphere (for REBOUND==2)

#define FLEX_RIG  2.00d+25
!                         Flexural rigidity of the lithosphere (in Nm)
!                         (for FLEX_RIG_MOD==1)

#define FLEX_RIG_FILE 'none'
!                         Name of the file containing the flexural rigidity
!                         of the lithosphere (for FLEX_RIG_MOD==2)

#define Q_LITHO 1
!                         0 : No coupled heat-conducting bedrock
!                         1 : Coupled heat-conducting bedrock

!-------- Evolution of the free surface --------

#define ZS_EVOL 1
!                         0 : No evolution of the free surface, kept fixed on
!                             the initial topography
!                         1 : Evolution of the free surface
!                         2 : Evolution of the free surface, but between times
!                             TIME_TARGET_TOPO_INIT0 and TIME_TARGET_TOPO_FINAL0
!                             the ice topography (zs, zb, zl) is gradually
!                             adjusted in order to reach a prescribed target
!                             at time TIME_TARGET_TOPO_FINAL0.
!                         3 : Evolution of the free surface,
!                             but maximum ice extent is constrained by the
!                             prescribed mask maske_maxextent(j,i).



#define TIME_TARGET_TOPO_INIT0 -9000.0d0
!                             Initial time for target-topography adjustment
!                             (in a; only for ZS_EVOL==2)

#define TIME_TARGET_TOPO_FINAL0 -100.0d0
!                             Final time for target-topography adjustment
!                             (in a; only for ZS_EVOL==2)

#define TARGET_TOPO_DAT_NAME 'none'
!                             Target-topography file (only for ZS_EVOL==2)

#define TARGET_TOPO_DAT_PATH 'none'
!                             Directory for target-topography file
!                             (no '/' at the end; only for ZS_EVOL==2)

#define MASK_MAXEXTENT_FILE 'none'
!                             Maximum ice extent mask file (only for ZS_EVOL==3)

#define CALCZS 3
!                         Solution of the ice-thickness equation:
!                         0 : Explicit scheme
!                         1 : DELETED (formerly ADI scheme)
!                         2 : DELETED (formerly over-implicit ADI scheme)
!                         3 : Over-implicit scheme,
!                             iterative built-in SOR solver
!                             of the resulting system of linear equations
!                         4 : Over-implicit scheme,
!                             iterative library-based (Lis) solver
!                             of the resulting system of linear equations

#define OVI_WEIGHT  1.50d+00
!                       Weighing parameter for the over-implicit scheme
!                       (only for CALCZS==3)

#define OMEGA_SOR   1.00d+00
!                       Relaxation parameter for the iterative SOR solver
!                       for systems of linear equations
!                       (0 < OMEGA_SOR < 2, only for CALCZS==3)

![S]----- Controlled evolution of ice-sheet ice distribution --------

#define H_EVOL_GLG  1.00d-00
#define H_EVOL_STR  1.00d-00
#define H_EVOL_GRD  1.00d-00
#define H_EVOL_LND  1.00d-00
#define H_EVOL_GLF  1.00d-00
#define H_EVOL_FLT  1.00d-00
#define H_EVOL_OCN  1.00d-00
!                       De-accelerated change in ice thickness at:
!                          GLG: grounding line (grounded side)
!                          STR: shelfy streams
!                          GRD: grounded ice
!                          LND: ice-free land
!                          GLF: grounding line (floating side)
!                          FLT: floating ice
!                          OCN: ocean
!                       A factor of 0.0 fixes ice thickness, while
!                       a factor of 1.0 lets it evolve normally.

#define H_EVOL_MASK_FILE 'none'
!                       File containing a mask specifying the points
!                       where fractions H_EVOL_XXX will be applied

#define H_SHOCK_INI 1.00d-00
!                       Anti-shock evolution coefficient. This value
!                       multiplies the H_EVOL_XXX fractions, and
!                       increases linearly from H_SHOCK_INI (at the
!                       beginning of the run) to 1.0 (at the end).

#define MK_FIX_MODE 0
!                       0 : No fixing of ice mask, updated normally
!                       1 : Mask is fixed. In other words, grounded
!                           is always grounded, ocean always ocean,
!                           etc. Thicknesses not allowed to be thinner
!                           than H_MIN. Maximum ice thickness is not
!                           constrained, other than limiting zb to
!                           be greater than zl for floating ice.

#define MK_FIX_MASK_FILE 'none'
!                       File containing a mask specifying the points
!                       where the ice-ocean-land mask will be fixed

!-------- Advection treatment in the temperature and age equations --------

#define ADV_HOR 3
!                         Discretization of horizontal advection terms in the
!                         3-d temperature and age equations:
!                         1 : Not defined
!                             (central differences would be unstable!)
!                         2 : First-order upstream using
!                             velocities on the staggered grid
!                         3 : First-order upstream using
!                             interpolated velocities on the main grid

#define ADV_VERT 3
!                         Discretization of vertical advection terms in the
!                         3-d temperature and age equations:
!                         1 : Central differences (plus artificial diffusion
!                             for the age equation)
!                         2 : First-order upstream using
!                             advection terms on the staggered grid
!                         3 : First-order upstream using
!                             interpolated advection terms on the main grid

#define AGEDIFF 5.00d-08
!                       Numerical age diffusivity
!                       (in m2/s, only for ADV_VERT==1)

!-------- Discretisation of topography gradients --------

#define TOPOGRAD 1
!                             Topography gradients at grid points
!                             with
!                         0 : second-order discretisation
!                         1 : fourth-order discretisation

![S]----- Surface temperature --------

#define TEMP_MODE 1
!                         0 : Surface temperatures are paremeterized
!                         1 : Monthly temperatures read from file

#define TEMP_PRESENT_PARA 2
!                         Parameterization of the present-day mean-annual
!                         and mean-January (summer) surface temperatures by
!                         1 : Fortuin and Oerlemans (1990)
!                             for the whole ice sheet
!                         2 : Fortuin and Oerlemans (1990),
!                             separately for three different elevation ranges

#define TEMP_MM_PRESENT_FILE 'ant_jb_20_tm_ccsm3_mis11_000ka.dat'
!                         Name of the file containing the input monthly
!                         temperatures data (only for TEMP_MODE==1)

#define GAMMA_LR   8.00d-03
!                         Lapse rate correction factor (for TEMP_MODE==1)

#define TSURFACE 5
!                         1 : delta_ts = DELTA_TS0, steady state
!                         3 : Sinusoidal air-temperature forcing
!                             between delta_ts = 0 C and delta_ts =
!                             -2*SINE_AMPLIT C with period
!                             SINE_PERIOD (in a)
!                         4 : delta_ts from ice-core data
!                             (e.g., GRIP, Vostok)
!                         5 : Surface temperature interpolated by using
!                             present values, LGM anomalies and a
!                             glacial index (requires ACCSURFACE==5,
!                             and only for TEMP_MODE==0)
!                         6 : Surface temperature anomaly as a function of time
!                             is read directly from a NetCDF file
!                             (requires ACCSURFACE==6 and NETCDF==2,
!                             and only for TEMP_MODE==0)

#define DELTA_TS0  0.00d+00
!                       Constant air-temperature deviation for steady
!                       states (only for TSURFACE==1)

#define SINE_AMPLIT 10.0d0
!                       Amplitude (in C) for sinusoidal air-temperature
!                       forcing (only for TSURFACE==3)

#define SINE_PERIOD 100000.0d0
!                       Period (in a) for sinusoidal air-temperature
!                       forcing (only for TSURFACE==3)

#define GRIP_TEMP_FILE 'edc_temp_deutedc3.dat'
!                       Name of the file containing the ice-core
!                       air-temperature forcing (only for TSURFACE==4)

#define GRIP_TEMP_FACT 1.0d0
!                       Modification factor for ice-core air-temperature
!                       forcing (only for TSURFACE==4)

#define GLAC_IND_FILE 'edc3_gi_nosmooth_800kyr.dat'
!                       Name of the file containing the glacial-index
!                       forcing (only for TSURFACE==5)

#define TEMP_MM_ANOM_FILE 'ant_jb_20_tm_ccsm3_mis11_anomlgm_pri.dat'
!                       Name of the file containing the LGM
!                       mean-monthly surface-temperature-anomaly data
!                       (difference LGM - present; for TSURFACE==5)

#define TEMP_MA_ANOM_FILE 'ant_jb_20_ta_ccsm3_mis11_anomlgm_pri.dat'
!                       Name of the file containing the LGM
!                       mean-annual surface-temperature-anomaly data
!                       (difference LGM - present; for TSURFACE==5)

#define TEMP_MJ_ANOM_FILE 'ant_jb_20_mj_ccsm3_mis11_anomlgm_pri.dat'
!                       Name of the file containing the LGM
!                       mean-July surface-temperature-anomaly data
!                       (difference LGM - present; for TSURFACE==5)

#define TEMP_PRECIP_ANOM_FILE 'none'
!                       Name of the NetCDF file containing the
!                       surface-temperature and precipitation anomaly data
!                       as functions of time
!                       (for TSURFACE==6 and ACCSURFACE==6)

#define TEMP_MA_ANOM_FACT 1.0d0
!                       Modification factor for the anomaly data of
!                       TEMP_MA_ANOM_FILE (for TSURFACE==5)
!                       or TEMP_PRECIP_ANOM_FILE (for TSURFACE==6)

#define TEMP_MJ_ANOM_FACT 1.0d0
!                       Modification factor for the anomaly data of
!                       TEMP_MJ_ANOM_FILE (for TSURFACE==5)
!                       or TEMP_PRECIP_ANOM_FILE (for TSURFACE==6)

!-------- Surface precipitation --------

#define PRECIP_PRESENT_FILE 'ant_jb_20_pa_ccsm3_mis11_000ka.dat'
!                       Name of the file containing the present-day
!                       precipitation data

#define PRECIP_FACTOR_FILE 'none'
!                       Name of the file containing the spatially dependent
!                       modification factor for the data in PRECIP_PRESENT_FILE
!                       ('none' for no modification)

#define ACCSURFACE 5
!                         1 : Precipitation is constant factor ACCFACT
!                             times present distribution
!                         2 : Precipitation is coupled linearly to
!                             delta_ts, coupling parameter GAMMA_S
!                         3 : Precipitation is coupled exponentially to
!                             delta_ts, coupling parameter GAMMA_S
!                         4 : Precipitation is coupled to delta_ts by the
!                             parameterisation by Huybrechts et al. (2007)
!                             [which involves the temperature above the
!                             inversion layer]
!                         5 : Precipitation interpolated by using
!                             present values, LGM anomalies and a
!                             glacial index (requires TSURFACE==5)
!                         6 : Precipitation anomaly as a function of time
!                             is read directly from a NetCDF file
!                             (requires TSURFACE==6 and NETCDF==2)

#define ACCFACT 1.00d+00
!                       Constant ratio between actual and present
!                       precipitation (only for ACCSURFACE==1)

#define GAMMA_S 0.00d+00
!                       Parameter in the linear or exponential relation
!                       between precipitation and delta_ts
!                       (in 1/C, only for ACCSURFACE==2, 3)

#define ELEV_DESERT 0
!                         0 : No elevation desertification
!                         1 : Elevation desertification accounted for
!                             (only for ACCSURFACE==1, 2, 3)

#define GAMMA_P     -log(2.0d0)
!                       Precipitation lapse rate for elevation desertification,
!                       in km^(-1)
!                       (only for ELEV_DESERT==1 and ACCSURFACE==1, 2, 3)

#define ZS_THRESH   1.50d+03
!                       Elevation threshold for elevation desertification, in m
!                       (only for ELEV_DESERT==1 and ACCSURFACE==1, 2, 3)

#define PRECIP_ANOM_FILE 'ant_jb_20_pm_ccsm3_mis11_anomlgm_pri.dat'
!                       Name of the file containing the
!                       LGM precipitation-anomaly data
!                       (ratio LGM/present; only for ACCSURFACE==5)

#define PRECIP_ANOM_FACT 1.0d0
!                       Modification factor for the anomaly data of
!                       PRECIP_ANOM_FILE (for ACCSURFACE==5)
!                       or TEMP_PRECIP_ANOM_FILE (for ACCSURFACE==6)

#define PRECIP_ANOM_INTERPOL 2
!                         1 : Interpolation with a linear function
!                             (for ACCSURFACE==5)
!                         2 : Interpolation with an exponential function
!                             (for ACCSURFACE==5)

#define SOLID_PRECIP 1
!                         Fraction of solid precipitation:
!                         1 : Linear function
!                             of monthly mean surface temperature
!                             by Marsiat (1994)
!                         2 : Fifth-order polynomial function
!                             of monthly mean surface temperature
!                             by Bales et al. (2009)
!                         3 : Dependency on instantaneous surface temperature
!                             (statistical approach by
!                             Huybrechts and de Wolde 1999)

!-------- Surface ablation --------

#define ABLSURFACE 1
!                         1 : Ablation parameterized
!                             by positive-degree-day (PDD) method.
!                             Rainfall assumed to run off instantaneously.
!                             Parameters defined in physical-parameter file.
!                         2 : Ablation parameterized
!                             by positive-degree-day (PDD) method.
!                             Rainfall assumed to contribute to formation
!                             of superimposed ice.
!                             Parameters defined in physical-parameter file.
!                         3 : Ablation parameterized
!                             by linear-temperature-index (LTI) method.

#define LAMBDA_LTI 500.0d0
!                       Melting coefficient for the LTI method
!                       (in (mm WE)/(a*deg C), for ABLSURFACE==3)

#define TEMP_LTI   -2.0d0
!                       Threshold summer temperature for the LTI method
!                       (in deg C, for ABLSURFACE==3)

!-------- Sea level --------

#define SEA_LEVEL 3
!                         1 : Constant sea level z_sl = Z_SL0
!                         2 : Saw-tooth-shaped sea-level forcing
!                             with glacial minimum z_sl = -130;
!                             for palaeoclimatic scenarios
!                         3 : Sea-level reconstruction from data
!                             (e.g., SPECMAP); for palaeoclimatic scenarios

#define Z_SL0        -43.57d+00
!                       Constant sea level
!                       (in m, only for SEA_LEVEL==1)

#define SEA_LEVEL_FILE 'bintanja2008_rsl.dat'
!                       Name of the file containing the sea-level
!                       forcing (only for SEA_LEVEL==3)

![S]----- Basal sliding --------

#define SLIDE_LAW 2
!                       1 : Weertman-type sliding,
!                           full ice pressure in denominator
!                       2 : Weertman-type sliding,
!                           reduced pressure (ice minus water) in denominator
!                       3 : Standard sliding as in Pollard and DeConto 2012
!                           that can handle Schoof 2007 parameterization

#define RED_PRES_LIMIT_FACT 3.50d-01
!                       Limiter for the reduced pressure (ice minus water),
!                       ensures that the reduced pressure cannot become smaller
!                       than RED_PRES_LIMIT_FACT times the ice pressure
!                       (for SLIDE_LAW==2)

#define GAMMA_SLIDE 3.00d+00
!                       Sub-melt sliding coefficient, in K

#define P_WEERT 3
!                       Weertman exponent p for the basal shear stress
!                       (integer value)

#define Q_WEERT 2
!                       Weertman exponent q for the basal pressure
!                       (integer value, only for SLIDE_LAW==1,2)

#define SLD_MODE 0
!                       0 : Homogeneous, constant sliding coefficient
!                           for the entire domain defined by C_SLIDE.
!                           If (C_SLIDE_FILE/='none'), the spatially
!                           varying coefficients will be read from
!                           that file. If SLD_INIT==1, the values
!                           will be taken from a previous simulation.
!                       1 : Inversion of sliding coefficients (PD12).
!                           Initial value depends on option SLD_INIT.
!                           If C_SLIDE_MASK_FILE/='none', then the
!                           inversion will operate only in grid points
!                           according to that mask.

#define SLD_INIT 0
!                       Initial values of sliding coefficients given by:
!                       0 : C_SLIDE_FILE (if /= 'none') or C_SLIDE
!                       1 : Final c_slide from previous run (only for
!                           ANF_DAT==3). In this case, check that the
!                           initial file contains c_slide! (Was only
!                           written if SLD_MODE==1 in previous run)

#define C_SLIDE  1.00d+00
!                       Sliding coefficient. Units are m/[a*Pa^(p-q)] for
!                       SLIDE_LAW==1,2; and m/[a*Pa^(p)] for SLIDE_LAW==3
!                       (only for SLD_INIT==0)

#define C_SLIDE_FILE      'ant_xx_20_sld_ccsm3_mis11_pi.dat'
!                       Name of the file containing the spatially varying
!                       sliding coefficients (only for SLD_INIT==0)

#define C_SLIDE_MASK_FILE 'none'
!                       Name of the file containing the mask for the
!                       sliding inversion (only for SLD_MODE==1)

#define SLD_SCL  5.00d+03
!                       Scaling constant for inversion procedure,
!                       in m (only for SLD_MODE==1). This is implemented in
!                       order to avoid overshots during the inversion.

#define SLD_MAX  1.00d+05
#define SLD_MIN  1.00d+00
!                       Lower and upper limits of the basal sliding
!                       coefficient c_slide (in m/[a*Pa^(p-q)]) during
!                       inversion (only for SLD_MODE==1)

#define SLD_AVE_GLG  0
#define SLD_AVE_GLF  1
!                       Sliding coefficients at the grounding line.
!                       GLG = grounded side, GLF = floating side
!                       0 : Keep inputed/inverted values
!                       1 : Computed as the average of surrounding
!                           sliding coefficients. This averaging is
!                           performed according to DTIME_SLD0

#define SLD_AVE_ALL  0
!                       Smoothing of sliding coefficients:
!                       0 : No smoothing
!                       1 : Five-point weighted median filter. The
!                           weight is given by SLD_AVE_REG. This
!                           smoothing is performed according to DTIME_SLD0

#define SLD_AVE_REG  1.00d-02
!                       Weighting for the smoothing of sliding coefficients
!                       It can take values between 0.0 (no smoothing) and
!                       1.0 (equal-weight smoothing) (only for SLD_AVE_ALL==1)

#define SEDI_SLIDE 1
!                       1 : No special treatment of sediment sliding
!                       2 : Special treatment of sediment sliding

#define MASK_SEDI_FILE 'none'
!                       Name of the file containing the
!                       hard-rock/soft-sediment/ocean mask (for SEDI_SLIDE==2)

#define C_SLIDE_SEDI     0.00d+0  /* for p=3, q=2 */
!                       Sliding coefficient, for sediment, in m/[a*Pa^(p-q)],
!                       (for SEDI_SLIDE==2)

#define GAMMA_SLIDE_SEDI 1.00d+00
!                       Sub-melt sliding coefficient, for sediment, in K
!                       (for SEDI_SLIDE==2)

#define P_WEERT_SEDI 3
!                       Weertman exponent p (integer value) for the basal
!                       shear stress, for sediment (for SEDI_SLIDE==2)

#define Q_WEERT_SEDI 2
!                       Weertman exponent q (integer value) for the basal
!                       pressure, for sediment (for SEDI_SLIDE==2)

#define TRANS_LENGTH_SL  0.00d+00
!                       Transition length between the two regimes of hard-rock
!                       and soft-sediment sliding, in km
!                       (for SEDI_SLIDE==2; value > 0.0d0 requires
!                       P_WEERT==P_WEERT_SEDI and Q_WEERT==Q_WEERT_SEDI)

!-------- Geothermal heat flux --------

#define Q_GEO_MOD 2
!                       1 : Constant geothermal heat flux defined
!                           by parameter Q_GEO
!                       2 : Spatially varying geothermal heat flux
!                           read from file
!                       3 : Inversion of geothermal heat flux
!                           Initial value depends on option Q_GEO_INIT.
!                           If Q_GEO_MASK_FILE/='none', then the
!                           inversion will operate only in grid points
!                           according to that mask.

#define GHF_INIT 0
!                       Initial values of geothermal heat flux given by:
!                       0 : Q_GEO_FILE (if /= 'none') or Q_GEO
!                       1 : Final q_geo from previous run (only for
!                           ANF_DAT==3). In this case, check that the
!                           initial file contains q_geo! (Was only
!                           written if Q_GEO_MOD==3 in previous run)

#define Q_GEO    1.00d+00
!                       Constant geothermal heat flux (for Q_GEO_MOD==1),
!                       in mW/m2

#define Q_GEO_FILE 'ant_sr_20_qg_fm.dat'
!                       Name of the file containing the spatially varying
!                       geothermal heat flux (for Q_GEO_MOD==2)

#define GHF_MASK_FILE 'none'
!                       Name of the file containing the mask for the
!                       geothermal heat flux inversion (only for Q_GEO_MOD==3)

#define GHF_SCL  5.00d+03
!                       Scaling constant for inversion procedure, in mW/m^2
!                       (only for Q_GEO_MOD==3). This is implemented in
!                       order to avoid overshots during the inversion.

#define GHF_MAX  3.00d+02
#define GHF_MIN  1.00d+00
!                       Lower and upper limits of the geothermal heat
!                       flux q_geo (in mW/m^2]) during inversion (only
!                       for Q_GEO_MOD==3).

#define GHF_AVE_ALL  0
!                       Smoothing of geothermal heat flux:
!                       0 : No smoothing
!                       1 : Five-point weighted median filter. The
!                           weight is given by GHF_AVE_REG. This
!                           smoothing is performed according to DTIME_GHF0

#define GHF_AVE_REG  1.00d-02
!                       Weighting for the smoothing of geothermal heat flux
!                       It can take values between 0.0 (no smoothing) and
!                       1.0 (equal-weight smoothing) (only for GHF_AVE_ALL==1)

![S]----- Ocean-induced basal melt --------

#define QBM_MODE 3
!                       0 : Basal melt computed as usual, using Greve's
!                           approach and calling subroutine calc_qbm
!                       1 : Inversion of ocean-induced basal melting
!                           rates, calling subroutine calc_qbm_potsdam
!                       2 : Direct input of basal melting/freezing rates,
!                           calling subroutine calc_qbm_potsdam
!                       3 : Spatially varying ocean temperatures
!                           read from file

#define QBM_GLAC 1
!                       0 : No glacial index for ocean temperatures
!                       1 : Spatially varying ocean temperatures
!                           based on LGM anomalies and a Glacial Index
!                           (only for QBM_MODE==3 and TSURFACE==5)

#define QBM_FILE       'none'
!                       Name of the file containing the spatially varying
!                       melting/freezing rates (only for QBM_MODE==2)

#define QBM_SCL       1.00d+02
!                       Scaling constant for inversion procedure,
!                       in m (only for QBM_MODE==1)

#define QBM_AVE_GLG 1
!                       Basal melt rates at the grounding line,
!                       grounded side (only for QBM_MODE==1):
!                       0 : No special treatment. Use of standard
!                           friction-induced melting
!                       1 : Including additional melting, computed as the
!                           average of surrounding, already inverted,
!                           melting rates, multiplied by the sub-grid
!                           floating fraction.

#define QBM_MAX_GRD   2.00d+00
#define QBM_MIN_GRD  -2.00d-00
!                       Special limits for grounded points, used during
!                       the inversion of basal ocean-induced melt rates
!                       (only for QBM_MODE==1)

#define OCN_FILE       'ant_jb_20_to_ccsm3_mis11_000ka.dat'
!                       Name of the file containing the spatially varying
!                       3-D ocean temperature data (only for QBM_MODE==3)

#define OCN_LGM_ANOM_FILE 'ant_jb_20_to_ccsm3_mis11_anomlgm_pri.dat'
!                          Name of the file containing the spatially varying
!                          3-D ocean temperature LGM anomaly data 
!                          (only for QBM_GLAC==1)

#define OCN_DELTA     0.00d+00
!                       Constant ocean-temperature deviation for steady
!                       states (only for QBM_MODE==3)

#define F_MELT_SH     8.50d-03
!                       Factor for Beckmann and Goose (2003) (only for
!                       QBM_MODE==3) for ice shelves
#define F_MELT_GL     0.50d-00
!                       Factor for Beckmann and Goose (2003) (only for
!                       QBM_MODE==3) for grounding line zone
#define F_MELT_CF     0.00d-01
!                       Factor for Beckmann and Goose (2003) (only for
!                       QBM_MODE==3) for marine fronts
#define F_MELT_MF     0.00d-03
!                       Factor for Beckmann and Goose (2003) (only for
!                       QBM_MODE==3) for marine fronts


#define QBM_REF_FLX   2.00d+06
!                       Reference horizontal ice flux at the grounding
!                       line (only for QBM_MODE==3)

#define F_DECAY       1.00d+00
!                       Exponential factor for distance-to-grounding-line
!                       melting (only for QBM_MODE==3)

#define F_DECAY_CF    1.00d+00
!                       Exponential factor for distance-to-calving-front
!                       melting (only for QBM_MODE==3)


!-------- Basal melting at the marine ice front --------

#define MARINE_ICE_BASAL_MELTING 3
!                        Basal melting rate at the marine ice front:
!                        1 : Computed by the usual energy jump condition
!                            for grounded ice
!                        2 : Prescribed by QBM_MARINE
!                        3 : Weighed average of grounded ice melting (computed)
!                            and marine ice melting (prescribed by QBM_MARINE)

#define QBM_MARINE    1.00d+01
!                        Basal melting rate at the marine ice front,
!                        in m/a water equiv. (for MARINE_ICE_BASAL_MELTING==2,3)

!-------- Basal melting for floating ice (only for MARGIN==3) --------

#define FLOATING_ICE_BASAL_MELTING 3
!                        Basal melting rate for floating ice:
!                        1-3 : GRISLI parameterization.
!                              Basal melting rate at the grounding line
!                              (grounded ice point with floating ice neighbour):
!                              1: computed by the usual energy jump condition
!                                 for grounded ice
!                              2: prescribed by QBM_FLOAT_1
!                              3: weighed average of grounded ice melting
!                                 (computed) and grounding zone melting
!                                 (prescribed by QBM_FLOAT_1)
!                        4   : Parameterization as a function of the thermal
!                              forcing (ocean temperature minus ice shelf basal
!                              temperature; by Ben Galton-Fenzi)

#define QBM_FLOAT_1   1.00d+00
!                       Basal melting rate in the grounding line zone,
!                       in m/a water equiv.
!                       (for FLOATING_ICE_BASAL_MELTING==1,2,3)

#define QBM_FLOAT_2   1.00d-01
!                       Basal melting rate over the continental shelf,
!                       in m/a water equiv.
!                       (for FLOATING_ICE_BASAL_MELTING==1,2,3)

#define QBM_FLOAT_3   1.00d+01
!                       Basal melting rate over the abyssal ocean,
!                       in m/a water equiv.

#define Z_ABYSS      -1600.0d0
!                       Threshold seabed elevation separating
!                       the continental shelf from the abyssal ocean, in m

#define H_W_0         0.00d-00
!                       Threshold water column thickness below which
!                       basal melting is reduced (0.0d0 -> no reduction)
!                       (for FLOATING_ICE_BASAL_MELTING==4)

!-------- Data output --------

#define OUT_TIMES 1
!                         Output of times in all files:
!                         1 : In SICOPOLIS years
!                         2 : In astronomical year numbering
!                             [ = signed year CE (AD) ],
!                             that is, SICOPOLIS years + YEAR_ZERO

#define OUTPUT 3
!                         1 : Writing of time-slice data in files
!                             '.erg' or '.nc' with prescribed time step
!                         2 : Writing of time-slice data in files
!                             '.erg' or '.nc' at arbitrarily specified times
!                         3 : Writing of time-slice data (only 2-d fields) in
!                             files '.erg' or '.nc' with prescribed time step
!                             plus
!                             writing of time-slice data
!                             (full set of 2-d and 3-d fields) in files
!                             '.erg' or '.nc' at arbitrarily specified times

#define ERGDAT 1
!                         0 : Only 2-d fields written as time-slice data
!                             (only for OUTPUT==1,2)
!                         1 : Full set of 2-d and 3-d fields written
!                             as time-slice data (only for OUTPUT==1,2)

#define NETCDF 2
!                         1 : Time-slice files unformatted ('.erg')
!                         2 : Time-slice files in format netCDF ('.nc')

#define DTIME_OUT0   1.00d+02
!                             Time step (in a) for writing of
!                             time-slice data (only for OUTPUT==1,3)

#define N_OUTPUT 5
!                             Number of specified times for writing of
!                             time-slice data (only for OUTPUT==2,3,
!                             not more than 20)

#define TIME_OUT0_01 -4.24d+05
#define TIME_OUT0_02 -4.23d+05
#define TIME_OUT0_03 -4.22d+05
#define TIME_OUT0_04 -4.21d+05
#define TIME_OUT0_05 -4.20d+05
#define TIME_OUT0_06  1.11d+11
#define TIME_OUT0_07  1.11d+11
#define TIME_OUT0_08  1.11d+11
#define TIME_OUT0_09  1.11d+11
#define TIME_OUT0_10  1.11d+11
#define TIME_OUT0_11  1.11d+11
#define TIME_OUT0_12  1.11d+11
#define TIME_OUT0_13  1.11d+11
#define TIME_OUT0_14  1.11d+11
#define TIME_OUT0_15  1.11d+11
#define TIME_OUT0_16  1.11d+11
#define TIME_OUT0_17  1.11d+11
#define TIME_OUT0_18  1.11d+11
#define TIME_OUT0_19  1.11d+11
#define TIME_OUT0_20  1.11d+11
!                             Times (in a) for writing of time-slice
!                             data (only for OUTPUT==2,3, in increasing
!                             order from #1 to #N_OUTPUT)

#define OUTSER 1
!                         1 : Only writing of usual time-series file '.ser'
!                         2 : Writing of usual time-series file '.ser'
!                             and of time-series file '.thk' for the
!                             complete ice-thickness field
!                         3 : Writing of usual time-series file '.ser'
!                             and of time-series file '.core' for the
!                             deep boreholes

#define OUTSER_V_A 2
!                         Volume and area data in the time-series files '.ser':
!                         1 : Grounded ice volume and area only
!                         2 : Total, grounded and floating ice volumes and areas

#define OUTBAK 1
!                         0 : No backup
!                         1 : Create a backup 3D file every DTIME_BAK0 years

#define DTIME_BAK0    1.00d+03
!                             Time step (in a) for writing of
!                             backup time-slice data (only for OUTBAK==1)
!                             ¡Make sure that it is a multiple of DTIME0!

!-------- Limiters etc. --------

#define NUMDIFF_H_T 0.00d+00
!                       Spatial smoothing parameter for computation
!                       of H_t

#define TAU_CTS     0.00d+00
!                       Numerical time lag (in a) for evolution
!                       of H_t

#define H_MIN       1.00d-03
!                       Minimum ice thickness interpreted as glaciation
!                       (in m)

#define VH_MAX      3.00d+03
!                       Lower (-VH_MAX) and upper (+VH_MAX) limits of
!                       horizontal velocities vx_c/t, vy_c/t (in m/a)

#define HD_MIN      1.00d-15
#define HD_MAX      5.00d+02
!                       Lower and upper limits of free-surface
!                       diffusivity hdiff (in m^2/s)

#define QBM_MIN    -1.00d+01
#define QBM_MAX     2.00d+02
!                       Lower and upper limits of the basal melting and
!                       drainage rates Q_bm, Q_tld and Q_b_tot
!                       (in m/a water equiv.)

#define AGE_MIN     1.00d-15
#define AGE_MAX     2.00d+06
!                       Lower and upper limits of computed ages (in a)

#define MEAN_ACCUM  1.00d+02
!                       Mean accumulation rate over modelled ice sheet
!                       (in mm water equiv./a)
!                       [Only required in case of CALCZS==3 for
!                       the convergence criterion of the SOR method.
!                       Need not be very precise, a rough estimate is
!                       sufficient.]

!+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

![S]----- Modifications --------
!
! 14.12.2015 Bernales: Downloaded in original form
! 14.12.2015 Bernales: Additional resolutions added [30,25,24,16,15,12,08,06-01]km
! 14.12.2015 Bernales: Restricted evolution of H added [H_EVOL_XXX]
! 14.12.2015 Bernales: Mask option for restricted evolution of H added [H_EVOL_MASK_MODE]
! 14.12.2015 Bernales: Anti-shock factor for evolution of H added [H_SHOCK_INI]
! 16.12.2015 Bernales: Reading of sliding coefficients from file added
! 16.12.2015 Bernales: Inversion of sliding coefficients added
! 16.12.2015 Bernales: Averaging of sliding coefficients at grounding line added
! 16.12.2015 Bernales: Smoothing of sliding coefficients added
! 16.12.2015 Bernales: Reference topography added [ZX_REF_FILE]
! 17.12.2015 Bernales: Reading of enhancement factors from file added
! 17.12.2015 Bernales: Inversion of enhancement factors added
! 17.12.2015 Bernales: Averaging of enhancement factors at grounding line added
! 17.12.2015 Bernales: Smoothing of enhancement factors added
! 18.12.2015 Bernales: Additional hybrid modes added: Bueler, B*G, PISM-like [HYB_MODE]
! 18.12.2015 Bernales: Reading of monthly surface temperatures from file added [TEMP_MODE]
! 18.12.2015 Bernales: Reference topography for surface temperatures added [ZS_TEMP_FILE]
! 18.12.2015 Bernales: Lapse-rate correction for surface temperatures added [GAMMA_LR]
! 26.01.2016 Bernales: Reading of basal melting/freezing rates from file added [QBM_FILE]
! 12.02.2016 Bernales: Additional hybrid mode added: non-sliding-SIA PISM-PIK [HYB_MODE]
! 15.02.2016 Bernales: Additional options for Bueler hybrid mode added [HYB_SXA_SPEED]
! 19.02.2016 Bernales: Deleted hybrid modes: B*G, PISM-like [HYB_MODE]
! 19.02.2016 Bernales: Redefined hybrid modes: Greve, Bueler, Jueler, Winkel [HYB_MODE]
! 19.02.2016 Bernales: Deleted option HYB_SXA_SPEED (not necessary after redefinition)
! 23.02.2016 Bernales: Additional sliding law added: Pollard [SLIDE_LAW]
! 26.04.2016 Bernales: Additional hybrid mode added: Tinkel [HYB_MODE]
! 12.05.2016 Bernales: Input of 3-D ocean temperatures added [QBM_MODE==3]
! 20.05.2016 Bernales: Creation of backup file added [OUTBAK]
! 06.06.2016 Bernales: Inversion of geothermal heat flux added
! 11.06.2018 MasBraga: Glacial Index for the monthly surface temperatures added
! 12.06.2018 MasBraga: Glacial Index for the ocean temperatures added [QBM_GLAC]
