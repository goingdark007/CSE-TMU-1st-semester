#include<stdio.h>
int main(){
int a[]={1,3,5,9,6};
int *ptr,i;
ptr = &a;
for(i=0;i<5;i++){
    printf("%d\t",ptr[i]);
}
for(i=0;i<5;i++){

    ptr = &a[i];
    printf("\n%p\n%d",ptr,*ptr);
}
return 0;
}
