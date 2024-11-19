#include<stdio.H>

int main(){
    float length, breadth , radius;
    printf("enter the length of rectangle:");
    scanf("%f", &length);
    printf("enter the breadth of rectangle:");
    scanf("%f", &breadth);
    printf("the area of rectangle is %f\n", length*breadth);

    printf("enter the radius of circle:");
    scanf("%f", &radius);
    printf("the area of circle is %f\n",3.14*radius*radius);

    return 0;
}