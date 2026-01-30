#include<stdio.h>//divisible by both 5 and 7
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%5==0 && n%7==0){
        printf("number is divisible by both 5 and 7");
    }else{
        printf("number is not divisible by both 5 and 7");
    }
    return 0;

}