#include<stdio.h>//sum of numbers 1 to 100 using do while
int main(){
    int i=1;
    int sum = 0;
    do{
sum=sum+i;
i++;
        
    }while(i<=100);
    printf("The sum :%d",sum);
    return 0;
}