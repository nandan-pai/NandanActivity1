//WAP to find the sum of n fractions.
#include <stdio.h>

struct fraction
{
    int num;
    int den;
};

typedef struct fraction f;

int input_limit()
{
    int n;
    printf("Enter number of fractions to be added: ");
    scanf("%d",&n);
    return n;
}

void arrayinput(int n,f *frac)
{
    for(int i = 0; i<n; i++)
    {
        printf("Enter values for fraction %d\n",i+1);
        printf("Numerator %d: ",i+1);
        scanf("%d",&frac[i].num);
        printf("Denominator %d: ",i+1);
        scanf("%d",&frac[i].den);
    }
}

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
int lcm(int n,f *frac) 
{ 
    int ans = frac[0].den; 
    for (int i = 1; i < n; i++) 
        ans = (((frac[i].den * ans)) / (gcd(frac[i].den, ans))); 
    return ans; 
} 

int finalnum(int n,int deno,f * frac)
{
    int numsum = 0;
    for(int i=0;i<n;i++)
    {
       frac[i].num = frac[i].num * (deno/frac[i].den); 
    }
    for(int i=0;i<n;i++)
    {
        numsum += frac[i].num;
    }
    return numsum;
}

void output(int nume,int deno)
{
    printf("Sum of given fractions is: %d/%d",nume,deno);
}

int main()
{
    int n;
    n = input_limit();
    struct fraction frac[n];
    arrayinput(n,frac);
    int deno = lcm(n,frac);
    int nume = finalnum(n,deno,frac);
    output(nume,deno);
    return 0;
}
