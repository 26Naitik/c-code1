//swap numbers without using third variable

#include<stdio.h>

int main(){
    int a=5;
    int b=6;
    printf("The values before swapping is a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swapping is a=%d and b=%d\n",a,b);
    return 0;
}