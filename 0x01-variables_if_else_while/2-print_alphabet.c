#include<stdio.h>
/**
 * main - Entry level
 * Description: 'A program to print alphabets in lowrcase'
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
