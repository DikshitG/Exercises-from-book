#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter a length:");
    scanf("%d",&l);
     printf("Enter a breadth:");
    scanf("%d",&b);
    area =  l*b;
    perimeter =2*(l+b);
    printf("The area is:%d\n",area);
    printf("The perimeter is :%d\n",perimeter);
    return 0;

}