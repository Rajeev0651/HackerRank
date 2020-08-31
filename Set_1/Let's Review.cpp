#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char S[10000];
		cin>>S;
		for(int i=0; i<strlen(S); i++)
		{
			if(i%2==0)
				cout<<S[i];
		}cout<<" ";
		for(int i=0; i<strlen(S); i++)
		{
			if(i%2==1)
				cout<<S[i];
		}
		cout<<"\n";
	}
	return 0;
}
