#include<bits/stdc++.h>
using namespace std;
int fun(long int N)
{
	int sum=0;
	for(long int i=1; i<=N/2; i++)
	{
		if(N%i==0)
		{
			sum+=i;
		}
		if(sum>N)
			return 0;		
	}
	if(sum==N)
		return 1;
	return 0;	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N;
		cin>>N;
		if(fun(N)==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";	
	}
}
