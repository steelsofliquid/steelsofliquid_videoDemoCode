#include <stdio.h>

int main()
{
	int quickcount = 0;
	printf ("Simple counter demo\n");
	
	for (int i = 0; i > 10; i++)
	{
		printf ("\nCounter: %d", quickcount);
		quickcount++;
	}

	printf("\n\nDemo complete.");
	return 0;
}