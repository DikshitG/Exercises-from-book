#include<stdio.h>
int main(){
    float npr,dollar;
    float amount = 145.41;
    printf("Enter a amount in Npr:Rs");
    scanf("%f",&npr);
    dollar=npr/amount;
    printf("Amount is:%.2f USD ",dollar);
    return 0;

}