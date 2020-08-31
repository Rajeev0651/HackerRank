#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,a,b,m,n,apple=0,orange=0;
	cin>>s>>t>>a>>b>>m>>n;
	int A[m],B[n];
	for(int i=0; i<m; i++)
		cin>>A[i];
	for(int i=0; i<n; i++)
		cin>>B[i];
	for(int i=0; i<m; i++)
	{
		A[i]+=a;
		if(A[i]>=s && A[i]<=t)
			apple++;	
	}
	for(int i=0; i<n; i++)
	{
		B[i]+=b;
		if(B[i]>=s && B[i]<=t)
			orange++;	
	}
	cout<<apple<<"\n"<<orange;	
	return 0;	
}
