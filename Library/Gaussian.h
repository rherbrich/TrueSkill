/*
 * Gaussian.h
 *
 *  Created on: Apr 1, 2011
 *      Author: rherb
 */

#ifndef GAUSSIAN_H_
#define GAUSSIAN_H_

namespace TrueSkill {

struct Gaussian {
	// Initializes a Gaussian
	Gaussian(double mu=0.0, double sigma=1.0);
private:
	// The precision mean of the Gaussian
	double	tau;
	// The precision of the Gaussian
	double	pi;
};

}

#endif /* GAUSSIAN_H_ */
