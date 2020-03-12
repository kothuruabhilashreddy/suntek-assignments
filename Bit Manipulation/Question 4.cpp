//Using C++
#include<bits/stdc++.h>
using namespace std;
//Recursive function to count the minimum count posibility 
int fun(int n,int count)
{
	int k,a;
	if(n<=1)return count;
	if(n%2==0)
	{
		count++;
		n=n/2;
		return fun(n,count);
	}
	else
	{
		count++;
	    return min(fun(n+1,count),fun(n-1,count));
	}
}

int main()
{
 int n;
 cin>>n;
 int min=fun(n,0);
 cout<<min;
}
