//WAP to find the sum of n fractions.
#include<stdio.h>

struct fractions
{
	int num;
	int den;
};

typedef struct fractions frac;
 
int input_n()
{
	int n;
	printf("Enter number of fractions to add: ");
	scanf("%d",&n);
    return n;
}

void numdeninput(int n, frac fracs[n])
{
	for(int i = 0; i<n; i++)
	{
		printf("\nEnter values for fraction %d\n",i+1);
		printf("Enter numerator and denominator: ");
		scanf("%d%d",&fracs[i].num,&fracs[i].den);
	}
}

frac sum_of_n(int n, frac fracs[n])
{
    frac final;
    final.num = 0;
    final.den = 1;
    for(int i=0;i<n;i++)
    {
        final.num = final.num * fracs[i].den + final.den * fracs[i].num;
        final.den *= fracs[i].den;
    }
    return final;
}

int findgcd(int numerator,int denominator)
{
    int gcd;
    for(int i=1;i<=numerator && i<=denominator;i++)
    {
        if(numerator%i==0 && denominator%i==0)
        {
            gcd = i;
        }
    }
    return  gcd;
}


frac simplified(frac fracsum,int gcd)
{
    fracsum.num = fracsum.num / gcd;
    fracsum.den = fracsum.den / gcd;
    return fracsum;
}

void output(int n,frac fracs[n],frac finalfrac)
{
    int i;
    printf("Sum of fractions: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d/%d + ",fracs[i].num,fracs[i].den);
    }
    printf("%d/%d = %d/%d",fracs[i].num,fracs[i].den,finalfrac.num,finalfrac.den);
}

int main(void)
{
    int n,gcd;
    n = input_n();
    frac fracs[n];
    numdeninput(n,fracs);
    frac fracsum = sum_of_n(n,fracs);
    gcd = findgcd(fracsum.num,fracsum.den);
    frac finalfrac = simplified(fracsum,gcd);
    output(n,fracs,finalfrac);
    return 0;
}

