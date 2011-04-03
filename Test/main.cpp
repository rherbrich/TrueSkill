/*
 * main.cpp
 *
 *  Created on: Apr 3, 2011
 *      Author: rherb
 */

#include <iostream>
#include <Gaussian.h>

using namespace TrueSkill;

// Tests the TrueSkill library
int main (int argc, char *argv[])
{
	Gaussian	g(10.0, 1.0);

	printf ("Hello world (%lf,%lf)!\n", (g.GetMean()), (g.GetVariance()));

	return 0;
}
