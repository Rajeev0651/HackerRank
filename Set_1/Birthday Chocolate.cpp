#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0; i<n; i++)
		cin>>A[i];
	int d,m,sum=0,count=0,x=0;
	cin>>d>>m;	
	int l=0;
	for(int i=0; i<m; i++)
		sum+=A[i];
	if(sum==d)	count++;
	for(int i=m; i<n; i++)
	{
		sum = sum-A[l]+A[i];
		if(sum==d)	count++;
		l++;
	}
	cout<<count;
	return 0;	
}
