#include<stdio.h>
int main (){
struct distance{
int feet;
int inch;
};
struct distance d1,d2,result;
printf("Enter the feet");
scanf("%d",&d1.feet);
printf("Enter the inch");
scanf("%d",&d1.inch);
printf("Enter the 2nd feet");
scanf("%d",&d2.feet);
printf("Enter the 2nd inch");
scanf("%d",&d2.inch);
result.feet = d1.feet + d2.feet;
result.inch = d1.inch + d2.inch;
while(result.inch >=12)
{
    result.inch = result.inch - 12;
    result.feet++;
}
printf("%d' - %d\"",result.feet,result.inch);
return 0;
}
