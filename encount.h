/*
	Ordo is program for calculating ratings of engine or chess players
    Copyright 2013 Miguel A. Ballicora

    This file is part of Ordo.

    Ordo is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Ordo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Ordo.  If not, see <http://www.gnu.org/licenses/>.
*/


#if !defined(H_ENC)
#define H_ENC
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

#include "boolean.h"
#include "mytypes.h"

enum SELECTIVITY {
	ENCOUNTERS_FULL = 0,
	ENCOUNTERS_NOFLAGGED = 1
};


// no globals
extern int
calc_encounters ( int selectivity
				, int n_games
				, const int *score 
				, const bool_t *flagged
				, const int *whiteplayer
				, const int *blackplayer
				, struct ENC *enc
);

// no globals
extern void
calc_obtained_playedby (const struct ENC *enc, int N_enc, int n_players, double *obtained, int *playedby);


// no globals
extern void
calc_expected (const struct ENC *enc, int N_enc, double white_advantage, int n_players, const double *ratingof, double *expected, double beta);



/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#endif