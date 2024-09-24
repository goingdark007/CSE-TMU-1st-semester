#include <stdio.h>
int main ( ) {
double a;
printf("Enter the mark percent:");
scanf("%lf",&a);
if(a>=80){
printf("Grade A");
}
else{
if(a>=70){
printf("Grade B");
}
else{
if(a>=60){
printf("Grade C");
}
else{
if(a>=50){
printf("Grade D");
}
else{
if(a>=40){
printf("Grade E");
}
else{
printf("Grade F");
}
}
}
}
}
return 0;
}

