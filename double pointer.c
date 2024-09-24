#include<stdio.h>
int main (){
int a = 10;
int *ptr;
int **ptr1;
ptr = &a;
ptr1 = &ptr;
printf("%d\n",a);
printf("%p\n",ptr);
printf("%d\n",*ptr);
printf("%p\n",ptr1);
printf("%d\n",**ptr1);
printf("%p",*ptr1);
return 0;
}

