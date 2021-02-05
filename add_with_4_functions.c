//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input1()
{
    int n1;
    printf("Enter number: ");
    scanf("%d",&n1);
    return n1;
}
int input2()
{
    int n2;
    printf("Enter number: ");
    scanf("%d",&n2);
    return n2;
}
int total(int n1,int n2)
{
    return n1+n2;
}
int output(int n1, int n2, int sum)
{
    printf("Sum of %d and %d is %d",n1,n2,sum);  
}
int main()
{
    int n1 = input1();
    int n2 = input2();
    int sum = total(n1,n2);
    output(n1,n2,sum);
    return 0;
}
