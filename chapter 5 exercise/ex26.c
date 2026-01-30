#include<stdio.h>
int main(){
    char name[20];
    int n;
    int amount=0;
    int total;
     printf("Enter a first name of a Person:");
     scanf("%s",name);
     printf("Enter a surname of Person:");
     scanf("%s",name);
     printf("Enter the Amount of monthly sales of person:");
    scanf("%d",&n);
        if(n>=1000){
            printf("\nThe Commision he get is:10%%\n");
            amount = (n*10)/100;
            total = n+amount;
            printf("\nThe amount he/she get after commision :%d",amount);
            printf("\nThe total amount he/she get after commision :%d",total);
           
            }
         else if (n<1000) {
            printf("\nThe Commision he get is:5%%\n");
            amount = (n*5)/100;
            total = n+amount;
            printf("\nThe amount he/she get after commision :%d",amount);
            printf("\nThe total amount he/she get after commision :%d",total);
           
           
            }
            
             
        
            printf("\nEnjoy Your Time");
            return 0;
}
