//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
float volume(float h, float b, float d)
{
	return (h*d*b+(d/b))/3;
}

int main(void)
{
    float h,b,d,vol;
    printf("Enter value of height(h) breadth(b) and depth(d) values of Tromboloid: ");
    scanf("%f%f%f",&h,&b,&d);
    vol = volume(h,b,d);
    printf("Volume of Tromboloid is: %f cubic cm.",vol);
    return 0;
}
