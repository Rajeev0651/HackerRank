#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,a,b,ans1=INT_MAX,ans2=INT_MAX,len=0;
    cin>>n>>p;
    if(p==1)
        ans1 = 1;
    for(int i=2; i<=p; i++)
    {
        if(i%2==0)  len++;
        a = i;
        b = i+1;
        if(p==a || p==b)
            ans1 = len;

    }
    len=0;
    if(n%2==0)
    {
        for(int i=n; i>=p; i--)
        {
            if(i%2==1)  len++;
            a = i+1;
            b = i+2;
            if(p==a || p==b)
                ans2 = len;

        }
    }
    else
    {
        if(p==n || p==n-1)
        {
            ans2=0;
        }
        for(int i=n-2; i>=p; i--)
        {
            if(i%2==1)  len++;
            a = i+1;
            b = i+2;
            if(p==a || p==b)
                ans2 = len;

        }
    }
    cout<<min(ans1,ans2);
    return 0;
}