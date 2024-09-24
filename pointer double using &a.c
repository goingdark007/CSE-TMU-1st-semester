#include<stdio.h>
int main(){
int a = 10,b;
b = &a;
printf("%p\n",&a);

printf("%d\n",*&a);

printf("%p\n",b);

printf("%p\n",&b);

printf("%d\n",*&b);

printf("%d\n",*&b);
return 0;
}
