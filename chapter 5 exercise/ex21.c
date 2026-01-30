#include<stdio.h>//check number odd or even
int main (){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    (n%2==0)?printf("Number is even"):printf("Number is odd");
    return 0;
}