#include<stdio.h> // Area of 2 concentric circles
#include<math.h>
int main(){
float r1,r2,area;
float PI = 3.14;
printf("Enter radius of Outer Circle:");
scanf("%f",&r2);
printf("Enter radius of Inner Circle:");
scanf("%f",&r1);
area = PI*(pow(r2,2)-pow(r1,2));
printf("Area of 2 concentric circle :%.2f",area);
return 0;
}
