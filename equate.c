/* See LICENSE file for license and copyright details */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		/* Character variables for arguments */
		char *x = argv[1];
		char *y = argv[2];
		char *z = argv[3];

		/* Convert x & y into doubles */
		double num1 = atoi(x);
		double num2 = atoi(z);

		/* Calculate the arguments */
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

	/* Error out if arguments are invalid */
	if(argc != 4)
	{
		printf("ERROR: Not enough/too many arguments passed\n");
		return 0;
	}

	return 0;
}
