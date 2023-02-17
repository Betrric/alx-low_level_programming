#include<stdio.h>
/*
*main - A program that prints the size of char, int, long arguments
*Return: Always 0 if success
*/
int main(void)
{
	printf("size of char:%lu byte(s)\n", sizeof(char));
	printf("size of int:%lu byte(s)\n", sizeof(int));
	printf("size of long int:%lu byte(s)\n", sizeof(longint));
	printf("size of long long int:%lu byte(s)\n", sizeof(longlongint));
	printf("size of float:%lu byte(s)\n", sizeof(float));
	return(0);
}
