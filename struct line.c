#include<stdio.h>
#include<math.h>
int main (){
struct line{
float x;
float y;
};
struct line a,b;
printf("Enter x1 :- ");
scanf("%f",&a.x);
printf("Enter y1 :- ");
scanf("%f",&a.y);
printf("Enter x2 :- ");
scanf("%f",&b.x);
printf("Enter y2 :- ");
scanf("%f",&b.y);
float c = (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
float d = sqrt(c);
printf("The length of the line is :- %f",d);
return 0;
}
