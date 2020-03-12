#include<bits/stdc++.h>
using namespace std;

int fun(int a,int b,int c)
{
	int count=0;
    while(c!=0)
    {
    	if(c%2==0)
    	{
    		if(a%2!=0)count++;
    		if(b%2!=0)count++;
		}
		else
		{
		 if((a%2==0)&&(b%2==0))count++;
		}
		a=a>>1;
		b=b>>1;c=c>>1;
	}return count;
}

int main()
{
 int a,b,c;
 cin>>a>>b>>c;
 //cout<<(a>>1)>>1;
 cout<<fun(a,b,c);
}
