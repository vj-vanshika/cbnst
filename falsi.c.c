#include <stdio.h>
#include <math.h>  //REGULA FALSI

double f(double x) 
{
    return 3*x + sin(x) - exp(x);
}

int main() 
{

    double c = 0, x0, x1;
    printf("Name: Vanshika Jain\nSem: 5\nSec/Roll: B-22\nUniversity Roll: 2017122\n\n");
    printf("Function :  3x + sin(x) - exp(x) \n");

    int noDigits = 4;
    double t = 0.5 * pow(10.0, -noDigits);

    x0 = 0;
    x1 = 0;
    int i=1;

    while (f(x0) * f(x1) > 0 || x0 == x1) 
   {
        printf("Enter a valid range:: ");
        scanf("%lf %lf", &x0, &x1);
    }

    double x_prev = 0;
    printf("Iteration|     x0\t |    c\t\t |    x1\t |    f(c)\n\n");
    while (1) 
    {
        x_prev = c;
        c = (x0 * f(x1) - x1 * f(x0)) / (f(x1) - f(x0));
        printf("    %d\t |  %lf\t |   %lf\t |  %lf\t |  %lf\n",i, x0, c, x1, f(c));
        i++;
        if (f(c) == 0) 
       {
            printf("\nResult is :: %lf", c);
            break;
        } 
        else if (f(x0) * f(c) < 0) 
       {
            x1 = c;
        } 
       else 
       {
            x0 = c;
        }
        if (fabs(c - x_prev) < t) 
       {
            printf("\n\nResult is :: %lf  within %lf tolerance\n\n", c, t);
            break;
        }
    }
    return 0;
}
 
