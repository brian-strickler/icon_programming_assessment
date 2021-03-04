#include <stdio.h>
#include "Prime.h"

int main(void) 
{
	unsigned long value;
	FILE* input = fopen("INPUT.TXT", "r");
	
	// Check if file opened successfully 
	if(!input){
		printf("Could not open \"INPUT.TXT\"\n");
		// Exit upon failure to open file
		return 1;
	}
	
	// Loop while new values are present in file
	while (fscanf(input, "%u",&value) != EOF){
		// value is prime
		if (is_prime(value) == 1) {
			printf("%d ", value);
			printf("prime\n");			
		}
		// value is not prime
		else {
			printf("%d ", value);
			printf("NOT prime\n");
		}
	}
	// Exit success
	return 0;
}
