#include<stdio.h>//roots of quardatic equation
#include<math.h>
#include<conio.h>
void main(){
    float a,b,c,d,r1,r2,real,img;
    printf("Enter a value of a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    if(a!=0){
        d=b*b-4*a*c;
        if(d>=0){
            d=sqrt(d);
            r1=-b/(2*a)+d/(2*a);
            r2=-b/(2*a)-d/(2*a);
            printf("\nr1=%.1f\n",r1);
            printf("r2=%.1f",r2);
        }
        else{
            //Imaginary roots
            d=sqrt(fabs(d));
            real = -b/(2*a);
            img=d/(2*a);
            printf("\nr1=%1.f+%.1fi\n",real,img);
            printf("\nr2=%1.f-%.1fi\n",real,img);

        }

    }else{
        ("\nInvalid output");
    }
    getch();
}
