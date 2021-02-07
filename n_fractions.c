//WAP to find the sum of n fractions.
#include<stdio.h>

struct fraction
{
    float num;
    float den;
};
typedef struct fraction FRACTION;

FRACTION input(int j)
{
    FRACTION f;
    printf("Enter Numerator %d : ",j);
    scanf("%f",&f.num);
    printf("Enter Denominator %d : ",j);
    scanf("%f",&f.den);
    return f;
}

int input_limit(int n)
{
    printf("Enter number of fractions to be added: ");
    scanf("%d",&n);
    return n;
}

float fract(FRACTION f)
{
    return f.num/f.den;
}

int output(float total)
{
    printf("Sum of the fractions is: %f",total);
}

int main(void)
{
    int n;
    n = input_limit(n);
    float sum = 0;
    FRACTION f;
    for(int i=0; i<n ;i++)
    {
        f = input(i+1);
        sum += fract(f);
    }
    output(sum);
    return 0;
}
