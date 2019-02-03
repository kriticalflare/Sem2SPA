#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,s,z=0;
        cin>>p>>s;
        int a[p];
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
        }
    if(p!=1)
    {
        for(int j=0;j<p-1;j++)
        {
             if(a[j+1]-a[j]>=s)
                {
                   cout<<j+2<<"\n";
                 z=1;
                   break;
                }
        }
        if(z==0)
        cout<<"-1\n";
    }
    else
        cout<<"-1\n";
    }
    return 0;
}
