//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include<math.h>

struct point
{
    float x;
    float y;
};
typedef struct point POINT;

POINT input()
{
    POINT ptr;
    printf("Enter abscissa: ");
    scanf("%f",&ptr.x);
    printf("Enter ordinate: ");
    scanf("%f",&ptr.y);
    return ptr;
}

float dist(POINT ptr1,POINT ptr2)
{
    float distance;
    distance = sqrt(pow((ptr1.x-ptr2.x),2)+pow((ptr1.y-ptr2.y),2));
    return distance;
}

void output(POINT ptr1, POINT ptr2, float distance)
{
    printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) is %f",ptr1.x,ptr1.y,ptr2.x,ptr2.y,distance);
}

int main()
{
   float distance;
   POINT ptr1,ptr2;
   ptr1 = input();
   ptr2 = input();
   distance = dist(ptr1,ptr2);
   output(ptr1,ptr2,distance);
   return 0;
}
