#include<stdio.h>
int main(){
int i,sum;
sum = 0;
for(i=1;i<=100;i+=2){
   sum += i;
}
printf("%d",sum);
return 0;
}
