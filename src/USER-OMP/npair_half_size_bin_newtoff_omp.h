/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://lammps.sandia.gov/, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef NPAIR_CLASS

NPairStyle(half/size/bin/newtoff/omp,
           NPairHalfSizeBinNewtoffOmp,
           NP_HALF | NP_SIZE | NP_BIN | NP_NEWTOFF | NP_OMP |
           NP_ORTHO | NP_TRI)

#else

#ifndef LMP_NPAIR_HALF_SIZE_BIN_NEWTOFF_OMP_H
#define LMP_NPAIR_HALF_SIZE_BIN_NEWTOFF_OMP_H

#include "npair.h"

namespace LAMMPS_NS {

class NPairHalfSizeBinNewtoffOmp : public NPair {
 public:
  NPairHalfSizeBinNewtoffOmp(class LAMMPS *);
  ~NPairHalfSizeBinNewtoffOmp() {}
  void build(class NeighList *);
};

}

#endif
#endif

/* ERROR/WARNING messages:

*/
