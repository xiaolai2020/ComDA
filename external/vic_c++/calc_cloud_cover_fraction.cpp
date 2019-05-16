#include "vic.h"
using namespace ldas;

static char vcid[] = "$Id: calc_cloud_cover_fraction.c,v 4.2 2004/05/06 22:29:38 tbohn Exp $";

void Vic::calc_cloud_cover_fraction(atmos_data_struct *atmos,
			       dmy_struct        *dmy,
			       int                nrecs,
			       int                Ndays,
			       int                stepspday,
			       double            *tskc) {
/********************************************************************
  calc_cloud_cover_fraction     Keith Cherkauer    January 12, 2000

  This routine is designed to estimate cloud cover when observations
  of shortwave radiation are available.

*********************************************************************/

  nrerror("The function to estimate cloud cover from observed solar radiation does not yeat work.");

}
