#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	unsigned int length, begin, end;
	
	// String is passed as multiple parameters
	if (argc > 2) 
	{
		// Print words from last to first
		for (int i = argc-1; i > 0; i--)
		{
			printf("%s ", argv[i]);
		}
	}
	// String is passed as single parameter
	else if (argc == 2)
	{
		// Get string length
		length = strlen(argv[1]);
		int j = length;
		
		// Descend characters checking for white spaces
		while (j >= 0)
		{
			// Set last character of word
			end = j;
			while ((argv[1][j] != ' ') && (j > 0)) 
			{
				j--;
			}
			// Set first character of word
			begin = j;
			if (begin == 0)
			{
				printf(" ");
			}	
			// Print word
			for (int k = begin; k <= end; k++)
			{
				printf("%c", argv[1][k]);
			}
			printf("");
			j--;
		}
	}
	else
	{
		// exit failure		
		printf("WARNING: Malformed command line syntax\nPlease pass string to reverse as command line parameter(s)!!!");
		return 1;
	}
	// exit success
	return 0;
}
