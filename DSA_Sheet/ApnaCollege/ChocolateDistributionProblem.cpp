#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, a[n];
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m, mini = INT_MAX;
    cin>>m;
    for(i = 0; (i+m-1) < n; i++)
    {
        int z = a[i+m-1] - a[i];
        if(z < mini)
        {
            mini = z;
        }
    }
    cout<<mini<<endl;
    return 0;
}
