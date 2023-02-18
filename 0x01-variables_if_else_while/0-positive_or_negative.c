#include<stdio.h>
#include<time.h>
/**
 * main - Entry level
 * Description: 'A program to find positive or negative value'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{	/* positive case */
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{	/* negative case */
		printf("%d is negative\n", n);
	}
	else
	{	/* zero case */
		printf("%d is zero\n", n);
	}

	return (0);
}
