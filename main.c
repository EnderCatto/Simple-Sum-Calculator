#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//printf("Enter 5 and then 5 more random numbers to get their sum:\n");
	int n, a, s = 0; // variable "s" is initialized to 0
	scanf("%d", &n); // read a value from input into the variable "n"

	while (n > 0)  // while variable "n" is greater than 0, execute the loop body
	{
		scanf("%d", &a);  // read a value from input into the variable "a"
		s += a;  // s = s + a; the value of "a" is added to the sum stored in "s"
		n--;	 // n = n - 1; decrease the value of "n" by 1
	}
	printf("%d\n", s); // print the value of the variable "s" to the console

	return 0;
}