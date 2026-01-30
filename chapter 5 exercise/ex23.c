//Try yourself using switch case
#include<stdio.h>//odd even ,table,pallindrome 
#include<stdlib.h>
#include<conio.h>
void oddoreven();
void table();
void pallindrome();
int main(){
    int choice;
printf("***********Main Menu**********\n");
printf("1.Find Odd or Even\n");
printf("\n2.Find multipication table up to n number\n");
printf("\n3.Find pallindrome or not\n");
printf("\n4.Exit\n");
printf("\n Enter your choice:");
scanf("%d",&choice);
if(choice == 1){
    oddoreven();
}
else if(choice == 2){
    table();
}
else if(choice == 3){
    pallindrome();
}
else{
    printf("\nExiting Program\n");
}

return 0;
}
void oddoreven(){
    system("cls");
    int n;
    printf("\n************Find Odd or Even*************\n");
    printf("\nEnter a number:");
    scanf("%d",&n);
    (n%2==0)?printf("\nNumber is even\n"):printf("\nNumber is odd\n");
   
    
}
void table(){
    system("cls");
    int n,m;
    printf("\n*****************Find Multipication Table up to n*************\n");
printf("\nEnter a number :");
scanf("%d",&n);
printf("\nEnter a number for table:");
scanf("%d",&m);
for(int i=n;i<=n;i++){
    for(int j= 1; j<=m;j++){
        printf("\n%d*%d=%d\n",i,j,n*j);
    }

}

}
void pallindrome(){
    system("cls");
    int n,digit,t;
    int rev =0;
    printf("\n****************Find Number Is Pallindrome Or Not*************\n");
    printf("\nEnter a number:");
    scanf("%d",&n);
    t=n;

    while(n!=0){
        digit = n%10;
        rev = rev*10+digit;
        n=n/10;
    }
    if(t==rev){
        printf("\nNumber is Pallindrome:%d",t);
    }else{
        printf("\nNumber is not Pallindrome:%d",t);
        
    }
        
}