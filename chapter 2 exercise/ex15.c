#include<stdio.h>//area and volume of sphere
#include<math.h>
int main(){
    float r,area,volume;
    float PI=3.14;
    printf("Enter a radius:");
    scanf("%f",&r);
    area = 4*PI*(pow(r,2));
    volume = (4*PI*(pow(r,3)))/3;
    printf("Area :%.2f\n Volume:%.2f",area,volume);
return 0;
}
