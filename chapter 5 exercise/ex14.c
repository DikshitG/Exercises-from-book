#include<stdio.h>//5 digit number and sum them individual
int main(){
    int n,sum;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    sum = (n/10000)+(n/1000%10)+(n/100%10)+(n/10%10)+(n%10);
    printf("Sum is:%d",sum);
    return 0;
}