#include<stdio.h>
/**
 * main - Entry value
 * Description: 'A program to print hexadecimal without printf'
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 48; ch <= 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
