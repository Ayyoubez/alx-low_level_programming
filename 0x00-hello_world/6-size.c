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
	long long d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
