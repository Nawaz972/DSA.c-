#include<bits/stdc++.h>
using namespace std;

int flipBit(int n,int a[])
{
    int i,c=0,m=0,o=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c++;
        else{
        c--;
        o++;
        }
        if(c>m)
        m=c;
        if(c<0)
        c=0;
    }
    return m+o;
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
    int z=flipBit(n,a);
    cout<<z;
}
