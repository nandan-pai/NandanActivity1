//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>

struct fraction
{
    int num;
    int den;
};

typedef struct fraction frac;

frac input()
{
    frac fr;
    printf("Enter numerator and denominator for fraction: ");
    scanf("%d%d",&fr.num,&fr.den);
    return fr;
}

int findgcd(int num,int den)
{
    int gcd = 0;
    for(int i = 2 ; i <= num && i <= den; i++)
        if(num % i == 0 && den % i == 0)
            gcd = i;
    return gcd;
}

frac simplify(frac add,int gcd)
{
    add.num = add.num/gcd;
    add.den = add.den/gcd;
    return add;
}

void output(frac f1,frac f2,frac add)
{
    printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,add.num,add.den);
}

frac sum(frac f1, frac f2)
{
    frac result = {(f1.num * f2.den) + (f2.num * f1.den), f1.den * f2.den};
    int gcd = findgcd(result.num,result.den);
    result = simplify(result,gcd);
    return result;
}

int main(void)
{
    int gcd;
    frac f1 = input();
    frac f2 = input();
    struct fraction add;
    add = sum(f1,f2);
    output(f1,f2,add);
    return 0;
}
