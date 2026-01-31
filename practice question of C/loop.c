#include<stdio.h>

int main(){
    int sum=0;
int num,n;
printf("Enter a value of N:");
scanf("%d",&n);
printf("Enter\t%d numbers:",n);
for(int i=0;i<n;i++){
    
    scanf("%d",&num);
    sum =sum+num;
}
printf("sum :%d",sum);

}