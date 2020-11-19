#ifndef _Sin_H_
#include <cmath>
#include "Factorial.h"
double Sin(double x)
{
	float c = 0;
	for (int n = 0; n <= 4; n++) {
		c = c + pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
	}
	return c;
}
#endif 