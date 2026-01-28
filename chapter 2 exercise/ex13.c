#include<stdio.h>
#include<math.h> //Roots of quqrdatic function
int main(){
    double a,b,c,D,x1,x2;
    printf("Enter a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    D =  b*b -4*a*c;
    x1 = (-b+sqrt(D));
    x2 =(-b-sqrt(D));
    printf("x1 = %lf\n x2 =%lf",x1,x2);
    return 0;
}