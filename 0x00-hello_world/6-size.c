#include <stdio.h>
/**
* main - Entry point
* function main return size of variables types
* Return: Always 0 (success)
*/
int main(void)/*main function return size of types*/
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of a int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
