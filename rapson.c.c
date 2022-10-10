#include <stdio.h>
#include <math.h>          //NEWTON RAPSON
#define PRECISION 0.0001
double f(float x)
    {
    return 3*x - cos(x) - 1;
    }
float derivative(float x)
    {
    return 3 + sin(x);
    }
int main()
{ 
    printf("Name: Vansh Patpatia \nSem: 5\nSec/Roll: B-20\nUniversity Roll: 2017117\n\n");
 printf("Function : 3x - cosx -1 = 0\n\n");
 
 float a,b;
 a=b=0;
 
    while(f(a)*f(b)>0 || a==b)
    { 
    printf("Enter valid Interval a & b: ");
    scanf("%f%f",&a,&b);
    } 
 
 float xn1 = (a+b)/2,xn;
 float prev;
 int i=0;
 
 while(1)
     { 
    printf("x%d : %f\n",i++,xn1);
    if(f(xn1)==0.0000)
    {
    printf("Result is : %f -> correct to 4 decimal places\n",xn1);
    break;
    }
    
 xn = xn1 - f(xn1)/derivative(xn1);
 
 if(fabs(xn-xn1)<= PRECISION)
 {
 printf("Result is : %f -> correct to 4 decimal places\n",xn);
 break;
 }
 
 xn1= xn;
 }
}
