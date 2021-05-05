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

#ifdef NSTENCIL_CLASS

NStencilStyle(half/bin/2d,
              NStencilHalfBin2d,
              NS_HALF | NS_BIN | NS_2D | NS_ORTHO)

#else

#ifndef LMP_NSTENCIL_HALF_BIN_2D_H
#define LMP_NSTENCIL_HALF_BIN_2D_H

#include "nstencil.h"

namespace LAMMPS_NS {

class NStencilHalfBin2d : public NStencil {
 public:
  NStencilHalfBin2d(class LAMMPS *);
  ~NStencilHalfBin2d() {}
  void create();
};

}

#endif
#endif

/* ERROR/WARNING messages:

*/
