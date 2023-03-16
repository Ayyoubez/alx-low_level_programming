#include <stdio.h>
/**
 * main - -main function
 * Return: 0(success)
 */
int main(void)
{
	int a;
	char b;
	long l;
	float f;

	printf("Size of a char :%lu.\n", (unsigned long)sizeof(a));
	printf("Size of an int :%lu.\n", (unsigned long)sizeof(b));
	printf("Size of a long :%lu.\n", (unsigned long)sizeof(l));
	printf("Size of a float :%lu.\n", (unsigned long)sizeof(f));
	return (0);
}
