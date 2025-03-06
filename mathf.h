/** \file mathf.h
    \brief Math library function header
    \author Gabriele Triglia
*/

#ifndef _MATHF_H_
#define _MATHF_H_
float Polynomial(float *coeff, int size, float in);
void Rectangular(float *values, int size, float stepsize, float *integ1, float *integ2);
float Trapezoidal(float *values, int size, float stepsize);

#endif /* _MATHF_ */
