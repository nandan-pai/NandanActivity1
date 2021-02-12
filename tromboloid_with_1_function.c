//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int compute_volume(int h,int d,int b)
{
	return ((h*d*b)+(d/b))/3;
}
int main(void)
{
	float h,d,b,vol;
	printf("Enter height(h), depth(d) and breadth(b) of tromboloid: ");
	scanf("%f%f%f",&h,&b,&d);
        vol = compute_volume(h,d,b);
	printf("Volume of tromboloid is: %f",vol);
	return 0;
} 
