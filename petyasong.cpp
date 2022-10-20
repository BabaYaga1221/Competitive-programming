#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	
	register char s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	while(q--)
	{
		int l,r,j=0;
		cin>>l>>r;
		for(int i=l-1;i<=r-1;i++)
		{
			register char ch=s[i];
			switch(ch)
			{
				case 'a':
                    j=j+1;
                    break;
                case 'b':
                    j=j+2;
                    break;
                case 'c':
                    j=j+3;
                    break;
                case 'd':
                    j=j+4;
                    break;
                case 'e':	
                    j=j+5;
                    break;
                case 'f':		
                    j=j+6;
                    break;
                case 'g':			
                    j=j+7;
                    break;
                case 'h':				
                    j=j+8;
                    break;
                case 'i':			
                    j=j+9;
                    break;
                case 'j':				
                    j=j+10;
                    break;
                case 'k':					
                    j=j+11;
                    break;
                case 'l':
                    j=j+12;
                    break;
                case 'm':
                    j=j+13;
                    break;
                case 'n':
                    j=j+14;
                    break;
                case 'o':
                    j=j+15;
                    break;
                case 'p':
                    j=j+16;
                    break;
                case 'q':
                    j=j+17;
                    break;
                case 'r':
                    j=j+18;
                    break;
                case 's':
                    j=j+19;
                    break;
                case 't':
                    j=j+20;
                    break;
                case 'u':
                    j=j+21;
                    break;
                case 'v':
                    j=j+22;
                    break;
                case 'w':
                    j=j+23;
                    break;
                case 'x':
                    j=j+24;
                    break;
                case 'y':
                    j=j+25;
                    break;
                case 'z':
                    j=j+26;
                    break;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}