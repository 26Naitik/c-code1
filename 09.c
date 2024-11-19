//swap two numbers using 3rd variable

#include<stdio.h>

int main(){
    int a=5;
    int b=6;
    int temp;
    printf("the values before swapping is a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("the values after swapping is a=%d and b=%d\n",a,b);
    return 0;
}