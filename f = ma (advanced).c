#include<stdio.h>
#include<string.h>
int main() {
    printf("This code solves or finds ");
    printf("valueof any quantity of the ");
    printf("equation of \"f = ma\".Just ");
    printf("simply enter force(f), mass(m)");
    printf(", time(t),velocity(v), previous");
    printf(" velocity(u), acceleration(a)\n\n");
    double f,m,a,t,u,v,p;
    char str1[4]="mass",str2[17];
    char str3[5]="force",str4[4]="time";
    char str5[8]="velocity";
    char str6[17]="previous velocity";
    char str7[15]="acceleration";
    printf("Enter the unknown\n");
    gets(str2);
    if(strcmp(str1,str2)==0) {
        printf("Enter the f\n");
        scanf("%lf",&f);
        printf("Enter the t\n");
        scanf("%lf",&t);
        printf("Enter the u\n");
        scanf("%lf",&u);
        printf("Enter the v\n");
        scanf("%lf",&v);
        p = v-u;
        a = p/t;
        m = f/a;
        printf("m = %lf kg",&m);
    }
    else if(strcmp(str3,str2)==0) {
        printf("Enter the m\n");
        scanf("%lf",&m);
        printf("Enter the t\n");
        scanf("%lf",&t);
        printf("Enter the u\n");
        scanf("%lf",&u);
        printf("Enter the v\n");
        scanf("%lf",&v);
        p = v-u;
        a = p/t;
        f = m*a;
        printf("f = %lf N",&f);
    }
    else if(strcmp(str4,str2)==0) {
        printf("Enter the m\n");
        scanf("%lf",&m);
        printf("Enter the f\n");
        scanf("%lf",&f);
        printf("Enter the u\n");
        scanf("%lf",&u);
        printf("Enter the v\n");
        scanf("%lf",&v);
        p = v-u;
        a = f/m;
        t = p/a;
        printf("t = %lf s",&t);
    }
    else if(strcmp(str5,str2)==0) {
        printf("Enter the m\n");
        scanf("%lf",&m);
        printf("Enter the t\n");
        scanf("%lf",&t);
        printf("Enter the u\n");
        scanf("%lf",&u);
        printf("Enter the f\n");
        scanf("%lf",&f);
        a = f/m;
        p = a*t;
        v = p+u;
        printf("v = %lf ms^-1",&v);
    }
    else if(strcmp(str6,str2)==0) {
        printf("Enter the m\n");
        scanf("%lf",&m);
        printf("Enter the t\n");
        scanf("%lf",&t);
        printf("Enter the f\n");
        scanf("%lf",&f);
        printf("Enter the v\n");
        scanf("%lf",&v);
        a = f/m;
        p = a*t;
        u = v-p;
        printf("u = %lf ms^-1",&u);
    }
    else if(strcmp(str7,str2)==0) {
        printf("Enter the f\n");
        scanf("%lf",&f);
        printf("Enter the m\n");
        scanf("%lf",&m);
        a = f/m;
        printf("a = %lf ms^-2",&a);
    }
    else {
        printf("Syntax error");
    }
}