#include<stdio.h>//4 digit number display in reverse order
int main()
{
    int n,rev;
    printf("Enter 4 digit number:");
    scanf("%d",&n);
    rev = (n%10)*1000+(n/10%10)*100+(n/100%10)*10+(n/1000);
    printf("Reverse order:%d",rev);
    return 0;
}