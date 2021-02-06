//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>
typedef struct
{
    int num;
    int den;
}FRACTION;

FRACTION input1(int *num1,int *den1)
{
    printf("For fraction 1 enter numerator and denominator: ");
    scanf("%d%d",num1,den1);
}

FRACTION input2(int *num2, int *den2)
{
    printf("For fraction 2 enter numerator and denominator: ");
    scanf("%d%d",num2,den2);
}
 
FRACTION sum(FRACTION f1, FRACTION f2)
{
    FRACTION result={(f1.num * f2.den) + (f2.num * f1.den), f1.den * f2.den};
    return result;
}

FRACTION output(FRACTION f1, FRACTION f2)
{
    FRACTION total = sum(f1,f2);
    printf("Result=%d/%d",total.num,total.den);
}

int main()
{
    int num1,den1,num2,den2;
    input1(&num1,&den1);
    input2(&num2,&den2);
    FRACTION f1={num1, den1};
    FRACTION f2 ={num2, den2};
    output(f1,f2);
    return 0;
}
