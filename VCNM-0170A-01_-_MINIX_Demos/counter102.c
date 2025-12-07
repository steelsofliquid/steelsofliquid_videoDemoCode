#include <stdio.h>

int main()
{
	int quickCount = 0;
	printf ("Simple counter demo\nWritten in C by SteelsOfLiquid for MINIX demo.\n--- Revision A ---\n");
	
	for (int i = 0; i == 10; i++)
	{
		printf ("\nCounter: %d", quickCount);
		quickCount++;
	}

	printf("\n\nDemo complete.\n");
	return 0;
}