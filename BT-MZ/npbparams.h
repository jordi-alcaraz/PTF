c NPROCS = 2 CLASS = A
c  
c  
c  This file is generated automatically by the setparams utility.
c  It sets the number of processors and the class of the NPB
c  in this directory. Do not modify it by hand.
c  
        character class
        parameter (class='A')
        integer num_procs, num_procs2
        parameter (num_procs=2, num_procs2=2)
        integer x_zones, y_zones
        parameter (x_zones=4, y_zones=4)
        integer gx_size, gy_size, gz_size, niter_default
        parameter (gx_size=128, gy_size=128, gz_size=16)
        parameter (niter_default=200)
        integer problem_size
        parameter (problem_size = 58)
        integer max_xysize, max_xybcsize
        integer proc_max_size, proc_max_size5, proc_max_bcsize
        parameter (max_xysize=8365)
        parameter (max_xybcsize=5010)
        parameter (proc_max_size=max_xysize*gz_size)
        parameter (proc_max_size5=proc_max_size*5)
        parameter (proc_max_bcsize=max_xybcsize*(gz_size-2))
        integer max_numzones
        parameter (max_numzones=8)
        double precision dt_default, ratio
        parameter (dt_default = 0.0008d0, ratio = 4.5d0)
        integer start1, start5, qstart_west, qstart_east
        integer qstart_south, qstart_north, qoffset
        integer qcomm_size, qstart2_west, qstart2_east
        integer qstart2_south, qstart2_north
        logical  convertdouble
        parameter (convertdouble = .false.)
        character compiletime*11
        parameter (compiletime='24 Jan 2017')
        character npbversion*3
        parameter (npbversion='3.2')
        character cs1*46
        parameter (cs1='scorep --online-access --user mpif90 -fopen...')
        character cs2*6
        parameter (cs2='$(F77)')
        character cs3*6
        parameter (cs3='(none)')
        character cs4*6
        parameter (cs4='(none)')
        character cs5*6
        parameter (cs5='(none)')
        character cs6*7
        parameter (cs6='-openmp')
        character cs7*6
        parameter (cs7='randi8')
