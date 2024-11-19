#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the vakue of b:");
    scanf("%d", &b);
    printf("enter the value of c:");
    scanf("%d", &c);
    
    printf("average is %f", ((float)(a+b+c)/3));

    return 0;
}