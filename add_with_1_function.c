//Write a program to add two user input numbers using one function.
#include<stdio.h>
int sum_a_b(int a, int b)
{
	return a+b;
}

int main(void)
{
	int a,b,sum;
   	printf("Enter two numbers: ");
    	scanf("%d%d",&a,&b);
    	sum = sum_a_b(a,b);
    	printf("Sum of %d and %d = %d",a,b,sum);
	return 0;
}
