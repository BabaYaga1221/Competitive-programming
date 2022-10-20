#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float c=0.0;
    float t;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        c=c+arr[i];
    }
    t=(c/a);
    printf("%0.12f",t);
    return 0;
}