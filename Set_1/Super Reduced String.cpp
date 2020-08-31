#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	cin>>s;
	int count,len;
	count=strlen(s);
	len = strlen(s);
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<len-1; j++)
		{
			if(s[j]==s[j+1])
			{
				int x=j;
				for(int k=j+2; k<len; k++)
				{
					s[x++]=s[k];
				}
				len-=2;
				count+=2;
			}
		}
	}
	if(count==strlen(s))
		cout<<"Empty String\n";
	else
	{
		for(int i=0; i<len; i++)
			cout<<s[i];	
	}	
}
