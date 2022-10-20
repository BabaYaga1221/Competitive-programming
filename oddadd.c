#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n > 0)
    {
        int a,b,t=0;
        scanf("%d %d",&a,&b);
        while (a != b)
        {
            int c=0;
            if (a>b)
            {
                t++;
                c = a - b;
                if (c % 2 == 0)
                    a = a - c;
                else
                {
                    c = c + 1;
                    a = a - c;
                }
            }
            else
            {
                t++;
                c = b - a;
                if (c % 2 == 0)
                {
                    c = c - 1;
                    a = a + c;
                }

                else
                {
                    a = a + c;
                }
            }
        }
        printf("%d \n", t);
        n--;
    }
    return 0;
}