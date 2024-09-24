#include<stdio.h>
#include<math.h>
int main () {
double x,y;
scanf("%lf%lf",&x,&y);
if(x>0&&y>0){
printf("First Quadrant");
}
else if(x>0&&y<0){
printf("Third Quadrant");
}
else if(x<0&&y>0){
printf("Second Quadrant");
}
else{
printf("Fourth Quadrant");
return 0;
}
}
