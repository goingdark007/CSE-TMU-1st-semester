#include<stdio.h>
int main(){
int array[10],i, min;
for(i=0;i<10;i++){
    scanf("%d",&array[i]);
}
min = array[0];
for(i=0;i<10;i++){
    if(min>array[i+1]){
        min = array[i + 1];
    }
}
printf("%d is minimum number in array",min);
return 0;
}


