//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>

int input_limit()
{
    int n;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    return n;
}

void array_input(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the element no %d of the array: ",i);
        scanf("%d",&a[i]);
    }
}

int array_sum(int n, int a[n])
{
    int sum = 0;
    for(int i=0; i<n ; i++)
    {
        sum += a[i];
    }
    return sum;
}

int output(int n,int a[n],int sum)
{
    int i;
    printf("The sum of ");
    for(i=0;i<n-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d=%d",a[i],sum);
}

int main()
{
    int n,sum;
    n = input_limit();
    int array[n];
    array_input(n,array);
    sum = array_sum(n,array);
    output(n,array,sum);
    return 0;
}
