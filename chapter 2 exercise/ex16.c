#include<stdio.h>
int main(){
    float C,F;
    printf("Enter a farhenient:");
    scanf("%f",&F);
    C = (5*(F-32)/9);
    printf("Celsius :%.2f",C);
    return 0;
}