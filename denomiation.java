import java.util.*;
class demoniation
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("INPUT :");
        int n=sc.nextInt();
        int q=n;
        int a[9]={0,0,0,0,0,0,0,0,0};
        int a,b,c,d,e,f,g,h,i;
        while(q>0)
        {
            int p=q%10;
            switch(p)
            {
                case 0:
                    System.out.print("zero");
                case 1:
                    System.out.print("one");
                    break;
                case 2:
                    System.out.print("two");
                    break;
                case 3:
                    System.out.print("three");
                    break;
                case 4:
                    System.out.print("four");
                    break;
                case 5:
                    System.out.print("five");
                    break;
                case 6:
                    System.out.print("six");
                    break;
                case 7:
                    System.out.print("seven");
                    break;
                case 8:
                    System.out.print("eight");
                    break;
                case 9:
                    System.out.println("nine");
                    break;
            }
            q=q/10;
            }
            System.out.println();
            while(n>=0)
            {
                if(n>=1000)
                {
                    a[0]++;
                    n=n-1000;
                }
                else if(n>=500)
                {
                    a[1]++;
                    n=n-500;
                }
                else if(n>=100)
                {
                    a[2]++;
                    n=n-100;
                }
                else if(n>=50)
                {
                    a[3]++;
                    n=n-50;
                }
                else if(n>=20)
                {
                    a[4]++;
                    n=n-20;
                }
                else if(n>=10)
                {
                    a[5]++;
                    n=n-10;
                }
                else if(n>=5)
                {
                    a[6]++;
                    n=n-5;
                }
                else if(n>=2)
                {
                    a[7]++;
                    n=n-5;
                }
                else if(n>=1)
                {
                    a[8]++;
                    n=n-1;
                }
            }
            for(int i=0;i<9;i++)
            {
                if(a[i]!=0)
                {
                    if(i==0)
                        System.out.println("1000*"+a[i]+"="+(1000*a[i]));
                    else if(i==1)
                        System.out.println("500*"+a[i]+"="+(500*a[i]));
                    else if(i==2)
                        System.out.println("100*"+a[i]+"="+(100*a[i]));
                    else if(i==3)
                        System.out.println("50*"+a[i]+"="+(50*a[i]));
                    else if(i==4)
                        System.out.println("20*"+a[i]+"="+(20*a[i]));
                    else if(i==5)
                        System.out.println("10*"+a[i]+"="+(10*a[i]));
                    else if(i==6)
                        System.out.println("5*"+a[i]+"="+(5*a[i]));
                    else if(i==7)
                        System.out.println("2*"+a[i]+"="+(2*a[i]));
                    else if(i==8)
                        System.out.println("1*"+a[i]+"="+(1*a[i]));
                }
            }

        }
    }
}