#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,maxm=0,sum=0;
		cin>>N>>M;
		int A[N],B[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			B[i] = A[i];
		}
		sort(B,B+N,greater<int>());
		int C[M-1];
		for(int i=0; i<M-1; i++)
			C[i] = B[i];
		sort(C,C+M-1);	
		int l=0;
		maxm = C[M-2];
		/*for(int i=0; i<M-1; i++)
			cout<<C[i]<<" ";
		cout<<"\n";	*/
		for(int i=0; i<N; i++)
		{
			if(binary_search(C,C+M-1,A[i]))
			{
				A[i] = -1;	
			}	
		}
		for(int i=0; i<N; i++)
		{
			if(A[i]!=-1)
			{
				sum+=A[i];
			}
			else{
				maxm = max(maxm,sum);
				sum=0;
			}
			maxm = max(maxm,sum);	
		}
		cout<<maxm<<"\n";	
	}
	return 0;
}
