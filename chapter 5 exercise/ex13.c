#include<stdio.h>//largest among 3 numbers using if else.
int main(){
    int a,b,c;
    printf("Enter three different numbers\na,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is largest:%d",a);
    }
    else if(b>a && b>c){
        printf("b is largest:%d",b);
    }
    else{
        printf("c is largest:%d",c);
    }
return 0;
}
