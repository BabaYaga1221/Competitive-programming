#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,a1,a2,a3,a4,a5,t;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    a1=k*l;
    a2=a1/n;
    a3=c*d;
    a4=p/np;
    if(a2<a3 && a2<a4)
        t=a2;
    else if(a3<a2 && a3<a4)
        t=a3;
    else
        t=a4;
a5=t/n;
printf("%d",a5);
return 0;
}