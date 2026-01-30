#include<stdio.h>//swapping two variables without using third variable
int main(){
    char a,b;
    printf("Enter variable A:");
    scanf(" %c",&a);
    printf("Enter variable B:");
    scanf(" %c",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("AFTER SWAP:\n A=%c\n B=%c",a,b);
    return 0;

}