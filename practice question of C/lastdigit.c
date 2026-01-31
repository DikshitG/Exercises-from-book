#include<stdio.h>
int main(){
    int n;
    int sum;
    printf("Enter a four digit numbner:");
    scanf("%d",&n);
    sum=(n/1000)+(n%10);
    printf("The sum of first and last digit number:%d",sum);
    return 0;
}