#include<stdio.h>//days into years,month,days
int main(){
    int n,year,rd,month,day;//rd=REMAINING DAYS
    printf("Enter a number of days:");
    scanf("%d",&n);
    year = n/365;
    rd=n%365;
    month=rd/30;
    day=rd%30;
    printf("%dyear\t%dmonth\t%dday",year,month,day);

    return 0;
}
