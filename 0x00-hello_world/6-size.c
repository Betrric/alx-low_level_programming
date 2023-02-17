#include<stdio.h>
/*
*main - A program that prints the sizes of types
*Return: Always 0 if success
*/
int main(void)
{
	printf("size of char:%u byte(s)\n", sizeof(char));
	printf("size of int:%u byte(s)\n", sizeof(int));
	printf("size of long int:%lu byte(s)\n", sizeof(long int));
	printf("size of long long int:%lu byte(s)\n", sizeof(long long int));
	printf("size of float:%lu byte(s)\n", sizeof(float));
	return(0);
}
