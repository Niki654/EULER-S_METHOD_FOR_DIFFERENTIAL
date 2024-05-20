#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x0,x1,y0,y1;
    float z0,z1,z2,z3,z4,h;
    printf("EULER's METHOD:\n");
    printf("The expression: x-y*y\n");
    printf("Enter the values of x0 and y0:\n");
    scanf("%f%f",&x0,&y0);
    printf("\nEnter the values of x1: to find the y1 value:\n");
    scanf("%f",&x0);
    h=x0-x1;
    printf("\nh:%f",h);
    z0=y0+(h*(x0-y0*y0));
    //printf("\ty'0:y0+h*(x0-y0*y0)");
    printf("\ny10:%f",z0);

    z1=y0+(h/2*(x0-y0*y0+x1-z0*z0));
  //  printf("\ny''(0):y0+h/2*(x0-y0*y0+x1-z0*z0)");
    printf("\ny2(0):%f",z1);

    z2=y0+h/2*(x0-y0*y0+x1-z1*z1);
    //printf("\ny3(0):y0+h/2*((x0-y0*y0)+(x1-z1*z1))");
    printf("\ny3(0):%f",z2);

    z3=y0+h/2*(x0-y0*y0+x1-z2*z2);
    //printf("\ny4(0):y0+h/2*(x0-y0*y0+x1-z0*z0)");
    printf("\ny4(0):%f",z3);

}
