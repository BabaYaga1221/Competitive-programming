#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a==1 || a==2 || a==0)
    printf("NO");
else if(a%2==0)
    printf("YES");
else
    printf("NO");
return 0;
}