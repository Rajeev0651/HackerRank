#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,B[6],maxm=-1,ans=0;
	memset(B,0,sizeof(int)*6);
	cin>>N;
	int A[N];
	for(int i=0; i<N; i++)
	{
		cin>>A[i];
		B[A[i]]++;
	}	
	for(int i=1; i<=5; i++)
	{
		if(B[i]>maxm)
		{
			ans = i;
			maxm = B[i];	
		}	
	}
	cout<<ans;
	return 0;	
}
