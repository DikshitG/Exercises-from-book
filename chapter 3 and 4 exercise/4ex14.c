#include<stdio.h>//sum of 4 digit number given by user
int main (){
    int n,sum;
    printf("Enter a four digit number:");
    scanf("%d",&n);
    sum =(n/1000)+(n/100%10)+(n/10%10)+(n%10);
    printf("Sum of 4 digit number:%d",sum);
    return 0;
}