#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,maxm=INT_MAX,sum=0;
		cin>>N>>M;
		int A[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0 ;i<N-M+1; i++)
		{
			for(int j=i; j<i+N-M+1 && j<N; j++)
			{
				sum+=A[j];
			//	cout<<sum<<"\t";
			}
			//cout<<"\n";
			maxm = min(maxm,sum);
			sum=0;
		}
		cout<<maxm<<"\n";	
	}
	return 0;
}
