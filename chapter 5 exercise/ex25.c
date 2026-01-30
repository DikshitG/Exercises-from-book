#include<stdio.h>//Armstrong or not
#include<math.h>
int main(){
    int n,t,digit;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        digit = n%10;
        sum = sum+(digit*digit*digit);
        n=n/10;
    }
    if(t==sum){
        printf("\nNumber is Armstrong:%d\n",t);
    }else{
        printf("\nNumber is not Armstrong:%d\n",t);
    }


    
    return 0;

}
