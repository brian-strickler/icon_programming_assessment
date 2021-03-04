#include "Prime.h"
#include <math.h>

// Functions determines if value is prime(returns 1) or not prime(returns 0)
int is_prime(const unsigned long X)
{
	unsigned long i;
	if (X == 1) {
		// Value is not prime
		return 0;
	}
	else{
		// Iterate from divisor of 2 to the square root of value of X
		for (i = 2; i <= sqrt(X); i++) {
			// Check for remainder
			if (X % i == 0) {
				// Value is not prime
				return 0;	
			}
		}
		// Value is prime
		return 1;
	}
}
