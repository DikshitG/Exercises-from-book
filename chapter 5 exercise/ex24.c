#include<stdio.h>//multipication table nested loop
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
for(int i=n;i<=n;i++){
    for(int j= 1; j<=10;j++){
        printf("%d*%d=%d\n",i,j,n*j);
    }

}
}
