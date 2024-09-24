#include<stdio.h>
int main(){
int a = 10;
char b = 'c';
double c = 2.5;

printf("%p\n",&a);

printf("%d\n",*&a);

printf("%p\n",&b);

printf("%c\n",*&b);

printf("%p\n",&c);

printf("%lf\n",*&c);

return 0;
}
