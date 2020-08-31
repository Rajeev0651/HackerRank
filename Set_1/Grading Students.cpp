#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,qi,val;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
	{
		if(a[i]>=38)
		{
			if(a[i]%5!=0)
			{
				qi = a[i]/5 + 1;
				if(qi*5-a[i]<3)
					a[i] = qi*5;	
			}
		}	
	}
	for(int i=0; i<n; i++)
		cout<<a[i]<<"\n";
	return 0;		
}
