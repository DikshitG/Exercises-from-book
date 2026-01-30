#include<stdio.h>
int main (){
     int a,b,c;
     int middle ;
     printf("Enter a value of a,b,c:");
     scanf("%d %d %d",&a,&b,&c);
     middle = a+b+c;
     if(a>b && a>c){
        middle-=a;
     }
     else if(b>a && b>c){
        middle-=b;
     }else{
        middle-=c;
     }
     if(a<b && a<c){
        middle-=a;
     }
     else if(b<a && b<c){
        middle-=b;
     }else{
        middle-=c;
     }
     printf("Middle value:%d");
     return 0;
}