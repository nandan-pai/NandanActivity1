//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>

float input_h()
{
	float h;
	printf("Enter height(h) of tromboloid: ");
	scanf("%f",&h);
    return h;
}

float input_d()
{
	float d;
	printf("Enter depth(d) of tromoloid: ");
	scanf("%f",&d);
	return d;
}

float input_b()
{
	float b;
	printf("Enter breadth(b) of tromboloid: ");
	scanf("%f",&b);
	return b;
}
float tromboloid_volume(float h, float d, float b)
{
	return ((h*d*b)+(d/b))/3;
}

void output(float volume)
{
	printf("Volume of the tromboloid is: %f",volume);
}

int main(void)
{
	float h = input_h();
	float d = input_d();
	float b = input_b();
	float volume = tromboloid_volume(h,d,b);
	output(volume);
	return 0;
}
