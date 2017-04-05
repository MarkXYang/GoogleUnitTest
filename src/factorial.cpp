/*
 * factorial.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: mark
 */

int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int cubic(int n)
{
	return n*n*n;
}



