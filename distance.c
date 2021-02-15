//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

void inputpt1(float *x1,float *y1)
{
	printf("Enter x and y coordinates for point 1: ");
	scanf("%f%f",x1,y1);
}
void inputpt2(float *x2,float *y2)
{
	printf("Enter x and y coordinates for point 2: ");
    scanf("%f%f",x2,y2);
}
void distance(float *x1,float *y1, float *x2, float *y2,float *dist)
{
	*dist = sqrt((*x2-*x1)*(*x2-*x1)+(*y2-*y1)*(*y2-*y1));
}
void output(float *x1,float *y1,float *x2,float *y2,float *dist)
{
	printf("The distance between two points (%f,%f) and (%f,%f) is %f",*x1,*y1,*x2,*y2,*dist);
}
int main(void)
{
float x1,y1,x2,y2,dist;
inputpt1(&x1,&y1);
inputpt2(&x2,&y2);
distance(&x1,&y1,&x2,&y2,&dist);
output(&x1,&y1,&x2,&y2,&dist);
return 0;
}
