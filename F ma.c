#include<stdio.h>
int main(){
double m,F,a,v,t,u,p;
printf("Enter the mass\n");
scanf("%lf",&m);
printf("Enter the v\n");
scanf("%lf",&v);
printf("Enter the u\n");
scanf("%lf",&u);
printf("Enter the t\n");
scanf("%lf",&t);
printf("Enter the F\n");
scanf("%lf",&F);
if(m==0){
p = v-u;
a = p/t;
m = F/a;
printf("%lf kg",m);
}
else if(F==0){
p = v-u;
a = p/t;
F = m*a;
printf("%lf N",F);
}
else if(t==0){
a = F/m;
p = v-u;
t = p/a;
printf("%lf s",t);
}
else if(v==0){
a = F/m;
p = a*t;
v = p+u;
printf("%lf ms^-1",v);
}
else if(m>0&&F>0&&t>0&&(v>=0||u>=0)){
a = F/m;
p = a*t;
u = v-p;
printf("%lf ms^-1",u);
}
return 0;
}