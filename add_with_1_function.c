//Write a program to add two user input numbers using one function.
#include<stdio.h>
int sum_of_two(int n1,int n2)
{
	return n1+n2;
}

int main(void)
{
	  int n1,n2,sumoftwo;
	  printf("Enter Number: ");
	  scanf("%d",&n1);
    printf("Enter Number: ");
    scanf("%d",&n2);
    sumoftwo = sum_of_two(n1,n2);
    printf("Sum of %d and %d is %d",n1,n2,sumoftwo);
    return 0;
}
