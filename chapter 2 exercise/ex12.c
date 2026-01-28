#include<stdio.h> //Compound Intrest
int main(){
    int p,r,t,SI;
    printf("Enter a Principle:");
    scanf("%d",&p);
    printf("Enter a Rate:");
    scanf("%d",&r);
    printf("Enter a Time:");
    scanf("%d",&t);
    SI = (p*t*r)/100;
    printf("Simple Intrest:%d",SI);
    return 0;
   
}