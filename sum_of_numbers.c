//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int input()
{
	int n;
	printf("How many numbers to be added?");
	scanf("%d",&n);
	return n;
}

void input_n(int n,int a[n])
{
	printf("Enter %d numbers: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

int sum_of_n(int n,int a[n])
{
	int sum = 0;
	for(int i=0;i<n;i++)
		sum += a[i];
	return sum;
}

void print_sum(int n,int a[n],int sum)
{
    int i; 
	for(i=0;i<n-1;i++)
		printf("%d + ",a[i]);
    printf("%d = %d",a[i],sum);
}   
int main(void)
{
	int n,sum;
	n = input();
	int a[n];
	input_n(n,a);
	sum = sum_of_n(n,a);
	print_sum(n,a,sum);
	return 0;
}
