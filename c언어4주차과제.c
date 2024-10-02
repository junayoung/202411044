#include <stdio.h>

int main(void)
{
	int i, p;
	
	for (int i = 1; i < 6; i++)
	{
		for (int p = 1; p < 6 - i; p++)
		{
			printf(" ");
		}
		for (int p = 1; p <= 2 * i - 1; p++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}