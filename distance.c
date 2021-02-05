//WAP to find the distance between two point using 4 functions.
#include <stdio.h> 
#include<math.h>

float input_pt1(float *x1, float *y1) 
{ 
    printf("Enter point 1 coordinates: ");
    scanf("%f%f",x1,y1);
} 

float input_pt2(float *x2, float *y2) 
{ 
    printf("Enter point 2 coordinates: ");
    scanf("%f%f",x2,y2);
} 
float calc_distance(float *x1, float *y1, float *x2, float *y2, float *d)
{
    *d = sqrt((*x2-*x1)*(*x2-*x1)+(*y2-*y1)*(*y2-*y1));
}
float output(float *x1, float *y1, float *x2, float *y2, float *d)
{
    printf("The distance between two points with coordinates (%.2f,%.2f) and (%.2f,%.2f) is %.2f",*x1,*y1,*x2,*y2,*d);
}

int main() 
{ 
	float x1,y1,x2,y2,d; 
	input_pt1(&x1,&y1); 
	input_pt2(&x2,&y2);
	calc_distance(&x1,&y1,&x2,&y2,&d);
	output(&x1,&y1,&x2,&y2,&d);
	return 0; 
} 
