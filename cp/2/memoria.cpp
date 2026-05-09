#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m ,h;

    cin>> t;

    for(int i=0; i<t; i++)
    {
        cin>>n>>m>>h;
        int v1[n], v2[n];
        for(int j=0; j<n; j++)
        {
            cin>>v1[j];
            v2[j]=v1[j];
        }
        int b, c;
        for(int j=0; j<m; j++)
        {
            cin>>b>>c;
            v1[b-1]+=c;
            if(v1[b-1]>h)
                for(int k=0; k<n; k++) v1[k]=v2[k];
                
        }
        for(int j=0; j<n; j++)
        {
            cout<<v1[j]<<' ';
        }
        cout<<endl;
    }

}