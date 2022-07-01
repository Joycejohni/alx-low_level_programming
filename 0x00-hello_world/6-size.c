#include<stdio.h>
int main(void) 
{
	int intType;
	float floatType;
	long longType;
	char charType;
	long long longlongType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long: %zu bytes\n", sizeof(longType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("size of long long: %zu bytes\n", sizeof(longlongType));
return (0);
}
