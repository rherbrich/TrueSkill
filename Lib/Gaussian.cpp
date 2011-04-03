/*
 * Gaussian.cpp
 *
 *  Created on: Apr 1, 2011
 *      Author: rherb
 */

#include "Gaussian.h"

namespace TrueSkill {

// Initializes a Gaussian using mean and standard deviation
Gaussian::Gaussian(double mu, double sigma)
{
	pi = 1.0 / (sigma * sigma);
	tau = mu/pi;
}

}
