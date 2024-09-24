#include <stdio.h>
#include <math.h>
void main()
{
double a,b,c,d,real,img,root1,root2;
printf("This program solves quadratic equation (ax^2 + bx + c)\n\n");
printf("Enter a\t");
scanf("%lf",&a);
printf("\n\nEnter b\t");
scanf("%lf",&b);
printf("\n\nEnter c\t");
scanf("%lf",&c);
d=b*b-4*a*c;
if(d>0){
    root1 = (-b + sqrt(d) ) / (2.*a);
    root2 = (-b - sqrt(d) ) / (2.*a);
    printf("\n\n%lf and %lf",root1,root2);
}
else if(d==0){
    root1=root2=-b/(2*a);
    printf("\n\n%lf and %lf",root1,root2);
}

else{
    root1=-b/(2*a);
    root2= sqrt(-d)/(2*a);
    printf("\n\n%lf and %lf",real,img);
}

getch();
}
