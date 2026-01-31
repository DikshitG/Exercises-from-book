#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a three number:");
    scanf("%d %d %d",&a,&b,&c);
    (a<b && a<c)?printf("a is smallest :%d",a):
    (b<a && b<c)?printf("b is smallest:%d",b):
    printf("c is smallest:%d",c);
    return 0;
}