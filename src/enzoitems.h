/*! \file enzoitems.h
 *  \brief this file contains definitions and routines for reading Enzo files
 *  
 * RAMSES files come in 4 separate files, 
 * amr_ file containing information about the cells (number, positions) etc
 * hydro_ file containing information about the hydrodynamical properties of the cells (density, velocity, pressure/gamma, then passive scalars like metallicity)
 * part_ file containing information about number of dark matter/star particles/sink (BH?) and their position/velocity info
 * info_ file containing cosmological information
 */

#ifndef ENZOITEMS_H
#define ENZOITEMS_H

// TODO enzo precision options

#define ENZODMTYPE 1
#define ENZOSTARTYPE 2

Int_t Enzo_get_nbodies(char *fname, int ptype, Options &opt);

#endif