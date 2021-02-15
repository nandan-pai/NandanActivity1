//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>

struct point 
{
	float x,y;
};
typedef struct point pt;

pt input()
{
    pt ptr; 
	printf("Enter x coordinate: ");
	scanf("%f",&ptr.x);
	printf("Enter y coordinate: ");
    scanf("%f",&ptr.y);
    return ptr;
} 

float dist(pt ptr1,pt ptr2)
{
	return sqrt((ptr2.x-ptr1.x)*(ptr2.x-ptr1.x)+(ptr2.y-ptr1.y)*(ptr2.y-ptr1.y));
}

void output(float dist,pt ptr1,pt ptr2)
{
	printf("Distance between the points (%f,%f) and (%f,%f) is %f.",ptr1.x,ptr1.y,ptr2.x,ptr2.y,dist);
}
	
int main(void)
{
	pt ptr1,ptr2;
	float distance;
	ptr1 = input();
	ptr2 = input();
	distance = dist(ptr1,ptr2);
	output(distance,ptr1,ptr2);
	return 0;
}
