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

#ifdef FIX_CLASS

FixStyle(temp/berendsen,FixTempBerendsen)

#else

#ifndef LMP_FIX_TEMP_BERENDSEN_H
#define LMP_FIX_TEMP_BERENDSEN_H

#include "fix.h"

namespace LAMMPS_NS {

class FixTempBerendsen : public Fix {
 public:
  FixTempBerendsen(class LAMMPS *, int, char **);
  ~FixTempBerendsen();
  int setmask();
  void init();
  void end_of_step();
  int modify_param(int, char **);
  void reset_target(double);
  double compute_scalar();
  void write_restart(FILE *);
  void restart(char *buf);
  virtual void *extract(const char *, int &);

 private:
  int which;
  double t_start,t_stop,t_period,t_target;
  double energy;
  int tstyle,tvar;
  char *tstr;

  char *id_temp;
  class Compute *temperature;
  int tflag;
};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Illegal ... command

Self-explanatory.  Check the input script syntax and compare to the
documentation for the command.  You can use -echo screen as a
command-line option when running LAMMPS to see the offending line.

E: Fix temp/berendsen period must be > 0.0

Self-explanatory.

E: Variable name for fix temp/berendsen does not exist

Self-explanatory.

E: Variable for fix temp/berendsen is invalid style

Only equal-style variables can be used.

E: Temperature ID for fix temp/berendsen does not exist

Self-explanatory.

W: Cannot thermostat atoms in rigid bodies

UNDOCUMENTED

E: Computed temperature for fix temp/berendsen cannot be 0.0

Self-explanatory.

E: Fix temp/berendsen variable returned negative temperature

Self-explanatory.

E: Could not find fix_modify temperature ID

The compute ID for computing temperature does not exist.

E: Fix_modify temperature ID does not compute temperature

The compute ID assigned to the fix must compute temperature.

W: Group for fix_modify temp != fix group

The fix_modify command is specifying a temperature computation that
computes a temperature on a different group of atoms than the fix
itself operates on.  This is probably not what you want to do.

*/
