#include<stdio.h>
int main (){
int a = 10;
int *ptr;
ptr = &a;
printf("%d\n",a);
printf("%p\n",ptr);
printf("%d",*ptr);
return 0;
}
