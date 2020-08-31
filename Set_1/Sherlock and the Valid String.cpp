#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100005];
	cin>>s;
	int freq[26],res[26],l=0,unique1=0,unique2=0,flag=0;
	memset(freq,0,sizeof(int)*26);
	for(int i=0; i<strlen(s); i++)
		freq[s[i]-'a']++;	
	for(int i=0; i<26; i++)
	{
		if(freq[i]!=0)
			res[l++]=freq[i];	
	}
	sort(res,res+l);
	unique1 = res[0];
	unique2 = res[l-1];
	int u1=0,u2=0;
	for(int i=0; i<l; i++)
	{
		if((res[i]!=unique1) && (res[i]!=unique2))
		{
			cout<<"NO\n"; return 0;
		}
		if(res[i]==unique1)	u1++;
		if(res[i]==unique2)	u2++;	
	}
//	cout<<u1<<" "<<u2<<"\n";
	if(unique1==unique2)
	{
		cout<<"YES\n"; return 0;
	}
	if(u1>1)
	{	if(u2>1)
			{cout<<"NO\n"; return 0;}
		else
		{
			if((unique2-1) == unique1)
			{
				cout<<"YES\n"; return 0;
			}	
		}			
	}	
	if(u2>1)
	{if(u1!=1)
		{cout<<"NO\n"; return 0;	}
	 else{
	 	cout<<"YES\n"; return 0;
	 }		
	}
	if(u1==1)
	{
		if(unique1+1 == unique2)
		{
			cout<<"YES\n"; return 0;
		}
	}			
	cout<<"NO\n";		
	return 0;					
}
