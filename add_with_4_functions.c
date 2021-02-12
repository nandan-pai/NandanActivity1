#include<stdio.h>
int input_a()
{
	int a;
	printf("Enter number1: ");
	scanf("%d",&a);
	return a;
}
int input_b()
{
	int b;
	printf("Enter number2: ");
	scanf("%d",&b);
	return b;
}
int sum_ab(int a, int b)
{
	return a+b;
}
void output(int a,int b)
{
	printf("Sum of %d and %d is %d",a,b,a+b);
}
int main(void)
{
	int a = input_a();
	int b = input_b();
	int sum = sum_ab(a,b);
	output(a,b);
	return 0;
}
