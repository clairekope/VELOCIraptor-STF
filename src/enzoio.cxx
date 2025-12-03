/*! \file enzoio.cxx
 *  \brief this file contains routines for Enzo snapshot file io
 */

#ifdef USEHDF
#include <string>
#include <fstream>
#include "stf.h"
#include "enzoitems.h"

int GetStarCount(const string filename) {
    std::ifstream in(filename);

    std::string line, num_str;
    while (std::getline(in, line)) {
        if (line.find("NumberOfStarParticles") == std::string::npos) continue;

        std::istringstream iss(line);
        std::string dummy;
        iss >> dummy; // NumberOfStarParticles
        iss >> dummy; // =
        iss >> num_str; // the number we want!
        break;
    }
    return std::stoi(num_str);
}

Int_t Enzo_get_nbodies(char *fname, int ptype, Options &opt)
{
    string base_path(fname), snapshot(opt.snapname);
    string hierarchy_file = base_path+'/'+snapshot+'/'+snapshot+".hierarchy";

    /* Since Enzo keeps all (non-active) particles in the same array regardless of type,
       will we need to report the total number of particles for memory balancing reasons
       regardless of opt.partsearchtype?
    */

    if (opt.partsearchtype==PSTALL) {

    }
    else if (opt.partsearchtype==PSTDARK) {
    
    }
    else if (opt.partsearchtype==PSTGAS) {

    }
    else if (opt.partsearchtype==PSTSTAR) {
        int num_stars;
        num_stars = GetStarCount(hierarchy_file);
    }
}
void ReadEnzo(Options &opt, vector<Particle> &Part, const Int_t nbodies, Particle *&Pbaryons, Int_t nbaryons)
{
    int dummy;
    dummy = 1;
}

#endif // usehdf