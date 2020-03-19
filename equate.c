#include<stdio.h>
#include<stdlib.h>

/*
 * I'm hoping to turn this code into the new badcalculator, under the new
 * name "equate" I hope for it to work on Linux system, MacOS, and BSD with
 * the aim of POSIX compliancy, though as a beginner programmer I may not be
 * too sure how to do that. I wish to put this software under BSD-Clause 3 licence
 * when working and complete, and to be distributed through source code on github.
 *
 * currently, the switch case to do the calculation does not work, and cannot figure
 * out why. Once the code is working I plan to put up on github to test across other
 * UNIX and UNIX-Like systems.. I should probably also change the integers into
 * floats or doubles when it comes to division.
 *
 * ((NOTE)) REMOVE THIS STATEMENT UPON DISTRIBUTION
 *
 */
int main(int argc, char *argv[])
{
	if(argc >= 3)
	{
		/*
		 * Needed integers DO NOT TOUCH
		 */
		char *x = argv[1];
		char *y = argv[2];
		char *z = argv[3];

		double num1 = atoi(x);
		double num2 = atoi(z);

		/*
		 * Calculate the arguments
		 */
		switch(*y)
		{
			case '+' :
				printf("%.0f\n", num1 + num2);
				break;
			case '-' :
				printf("%.0f\n", num1 - num2);
				break;
			case 'x' :
				printf("%.0f\n", num1 * num2);
				break;
			case '/' :
				printf("%.1f\n", num1 / num2);
				break;
			default :
				printf("invalid operator\n");
				break;
		}

		return 0;

	}

	/*
	 * Error out if arguments are invalid
	 */
	if(argc < 3)
	{
		printf("ERROR: Not enough arguments passed\n");
		return 0;
	}

	return 0;
}
