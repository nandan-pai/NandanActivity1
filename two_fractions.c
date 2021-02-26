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
    int gcd;
    for(int i = 2 ; i <= num && i <= den; i++)
        if(num % i == 0 && den % i == 0)
            gcd = i;
    return gcd;
}

frac sum(frac f1, frac f2)
{
    frac result = {(f1.num * f2.den) + (f2.num * f1.den), f1.den * f2.den};
    return result;
}

frac simplify(frac add,int gcd)
{
    add.num = add.num/gcd;
    add.den = add.den/gcd;
    return add;
}

frac output(frac add)
{
    printf("Result = %d/%d",add.num,add.den);
}

int main(void)
{
    int gcd;
    frac f1 = input();
    frac f2 = input();
    struct fraction add;
    add = sum(f1,f2);
    gcd = findgcd(add.num,add.den);
    frac simple = simplify(add,gcd);
    output(simple);
    return 0;
}
