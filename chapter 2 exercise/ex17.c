#include<stdio.h>//square of a number
#include<math.h>
int main(){
    int n,square;
    printf("Enter a number:");
    scanf("%d",&n);
    square = (pow(n,2));
    //square = n*n;
    printf("Square :%d",square);
    return 0;

}

