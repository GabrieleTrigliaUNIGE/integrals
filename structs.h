/** \file structs.h
	\brief defines the structs
	\author Gabriele Triglia

	Details.
*/

#ifndef STRUCTS_H
#define STRUCTS_H

/**
 * \struct Poly
 * \brief strores the coefficients of a polynomial
 *
 * coeff[0] + coeff[1]x + coeff[2]x^2 + ...
 */

typedef struct Poly {
	double *coeffs;
	int degree;
} poly_s;

#endif /* STRUCTS_H */
