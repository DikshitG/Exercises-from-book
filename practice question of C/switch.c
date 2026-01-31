#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define TRUE 1
#define PI 3.14
void main(){
    int choice;
    int area,r;
    int n;
    int num,sum,N;
    printf("1.Fimd the area of circle\n");
    printf("2.Check the given number is odd or even\n");
    printf("3.Find the sum of N numbers\n");
    printf("4.Exit\n");
    while(TRUE)
    {
    printf("\nEnter a choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        printf("Enter a radius:");
        scanf("%d",&r);
        area=PI*(pow(r,2));
        printf("\nArea of Circle:%d",area);
        break;
        case 2:
        printf("\nEnter a number:");
        scanf("%d",&n);
        (n%2==0)?printf("\nNumber is even\n"):printf("\nNumber is odd");
break;

        case 3:
        sum =0;
        printf("Enter a value of N:");

        scanf("%d",&N);
        for(int i=1;i<=N;i++){
            sum=sum+i;
            }
        printf("Sum is %d",sum);
        break;
        case 4:
        exit(0);
        default:
        printf("Wrong choice!Try again\n");

        
    }
    }




}