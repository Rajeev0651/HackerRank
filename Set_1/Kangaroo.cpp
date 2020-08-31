#include<bits/stdc++.h>
using namespace std;
int main()
{
	string ans="YES";
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if(v1==v2)
	{
		cout<<"NO";
		return 0;
	}
	if((x2-x1)%(v1-v2)!=0)
		ans="NO";
	if(v1<v2)
		ans="NO";	
	cout<<ans<<"\n";
	return 0;
}
