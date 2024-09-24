#include<stdio.h>
int main(){
int array[10],i, max;
for(i=0;i<10;i++){
    scanf("%d",&array[i]);
}
max = array[0];
for(i=0;i<10;i++){
    if(max<array[i+1]){
        max = array[i + 1];
    }
}
printf("%d is maximum number in array",max);
return 0;
}

