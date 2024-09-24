#include<stdio.h>
#include<math.h>
int main (){
double m,v,u,F,a,t,p,unknown;
printf("Enter the mass\n");
scanf("%lf",&m);
printf("Enter the u\n");
scanf("%lf",&u);
printf("Enter the v\n");
scanf("%lf",&v);
printf("Enter the t\n");
scanf("%lf",&t);
printf("Enter the F\n");
scanf("%lf",&F);
if(m==0){
p = v-u;
a = p/t;
m = F/a;
printf("m = %lfkg\n",m);
}
else if(v==0){
a = F/m;
p = t*a;
v = p+u;
printf("v = %lfms^-1",v);
}
else if(t==0){
a = F/m;
p = v-u;
t =p/a;
printf("t = %lfs\n",t);
}
else if (F==0){
p = v+u;
a =p/t;
F = m*a;
printf("F = %lfN\n",F);
}
else if(F>0&&m>0&&t>0&&v>0){
a = F/m;
p = a*t;
u = v-p;
printf("u = %lfms^-1\n",u);
}
}

