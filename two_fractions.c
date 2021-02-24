//WAP to find the sum of two fractions.
#include<stdio.h>

struct fraction
{
    int num,den;
};

typedef struct fraction frac;

frac input(int *num1,int *den1,int *num2, int *den2)
{
    printf("For fraction 1 enter numerator and denominator: ");
    scanf("%d%d",num1,den1);
    printf("For fraction 2 enter numerator and denominator: ");
    scanf("%d%d",num2,den2);
}

frac simplify(frac sum,int gcd)
{
    sum.num = sum.num / gcd;
    sum.den = sum.den / gcd;
    return sum;
}
 
int findgcd(int num,int den)
{
    int gcd;
    for(int i = 2 ; i <= num && i <= den; i++)
        if(num % i == 0 && den % i == 0)
            gcd = i;
    return gcd;
}

frac add(frac f1,frac f2)
{
    frac result;
    result.den = f1.num * f2.den;
    result.num = (f1.num * f2.den) + (f2.num * f1.den);
    
    return result;
}

frac output(frac sum)
{
    printf("Result = %d/%d",sum.num,sum.den);
}

int main(void)
{
    int num1,den1,num2,den2,gcd;
    input(&num1,&den1,&num2,&den2);
    frac f1 = {num1, den1};
    frac f2 = {num2, den2};
    frac sum = add(f1,f2);
    gcd = findgcd(sum.num,sum.den);
    sum = simplify(sum,gcd);
    output(sum);
    return 0;
}
