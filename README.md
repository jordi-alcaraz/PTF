#Log in:
bin/log.txt

# Changes
## BT-MZ/bt.f
Inserted in line 53:
- #include "/home/jordi/soft/Score-P/include/scorep/SCOREP_User.inc" 

Inserted in line 54: 
- SCOREP_USER_REGION_DEFINE( OA_Phase )

Inserted in line 217: 
- SCOREP_USER_OA_PHASE_BEGIN( OA_Phase, "foo", 0 )

Inserted in line 245: 
- SCOREP_USER_OA_PHASE_END( OA_Phase )

##config/make.def
Inserted in line 33: 
- F77 = scorep --online-access --user mpif90 -fopenmp -I/home/jordi/soft/Score-P/include/scorep/ $(FFLAGS)

Changed in lines 84 & 119:
- icc --> gcc



