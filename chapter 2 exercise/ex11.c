#include<stdio.h> //Area and semiperimeter of triangle
#include <math.h>
int main(){
    int a=10;
    int b=20;
    int c=20;
    int area,s;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Semiperimeter:%d\n Area:%d",s,area);
    return 0;
}