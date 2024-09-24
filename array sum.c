#include<stdio.h>
int main(){
int array[10],i,sum=0;
for(i=0;i<10;i++){
    scanf("%d",&array[i]);
}
for(i=0;i<10;i++){
    sum = sum + array[i];
}
printf("%d",sum);
return 0;
}
