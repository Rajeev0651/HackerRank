#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sum=0,count=0;
	cin>>n>>k;
	int A[n];
	for(int i=0; i<n; i++)	cin>>A[i];
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			sum=A[i]+A[j];
			if(sum%k==0)
				count++;	
		}
	}
	cout<<count;
	return 0;
}
