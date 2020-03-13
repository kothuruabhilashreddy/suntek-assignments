#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,q;
 cin>>n;//no of ele in array
 int a[n],b[n];
 for(int i=0;i<n;i++)cin>>a[i];
 b[0]=a[0];
 for(int i=1;i<n;i++)
 b[i]=a[i]^b[i-1];
 cin>>q; //no of queries
 while(q--)
 {
 	int m,n;
 	cin>>m>>n;
 	if(m>0)
 	cout<<(b[n]^b[m-1]);
 	else
 	cout<<b[n];
 }
 
}
