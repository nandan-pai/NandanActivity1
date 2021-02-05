//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input_h()
{
	float h;
	printf("Enter height of tomboloid: ");  
    scanf("%f",&h);
    return h;
}
float input_b()
{
	float b;
	printf("Enter breadth of tomboloid: ");
	scanf("%f",&b);
	return b;
}
float input_d()
{
	float d;
	printf("Enter depth of tomboloid: ");
    scanf("%f",&d);
    return d;
}
float volume(float h, float b, float d)
{
	printf("Volume of the tomboloid is: %f",((h*b*d)+(d/b))/3);
}
int main(void)
{
	float h = input_h();
	float b = input_b();
	float d = input_d();
	volume(h,b,d);
	return 0;
}
