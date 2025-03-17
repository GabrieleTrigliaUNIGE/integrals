/** \file mathf.h
    \brief Math library function header
    \author Gabriele Triglia
*/

#ifndef MATHF_H
#define MATHF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

double Polynomial(poly_s polyf, double in);
void Rectangular(double *values, int size, double stepsize, double *integ1, double *integ2);
double Trapezoidal(double *values, int size, double stepsize);

#endif
