/* This program solves the quadratic equation */
#include <stdio.h>
#include <math.h>
int quadratic1(double a,double b,double c)
{
    double d,root1;
    d=(b*b)-(4*a*c);
    root1 = (-b + sqrt(d) ) / (2*a);

    return (root1);
}
int quadratic2(double a,double b,double c) {
    double d,root2;
    d=(b*b)-(4*a*c);
    root2 = (-b - sqrt(d) ) / (2*a);

    return (root2);
}
int main() {
    double e,f,g,w1,w2;
    scanf("%lf%lf%lf",&e,&f,&g);
    w1=quadratic1(e,f,g);
    w2=quadratic2(e,f,g);
    printf("%lf\t%lf",w1,w2);

    return 0;
}