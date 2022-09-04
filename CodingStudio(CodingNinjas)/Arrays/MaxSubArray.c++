#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int n,int a[])
{
    int i,c=0,m=0;
    for(i=0;i<n;i++)
    {
        c=c+a[i];
        if(c>m)
        m=c;
        if(c<0)
        c=0;
    }
    return m;
}

int main()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int z=maxSubArray(n,a);
    cout<<z;
}
