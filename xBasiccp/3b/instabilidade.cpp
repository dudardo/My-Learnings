#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, t, ans=0;
    cin>>l>>t;

    pair<int,int> loc[l];
    bool check[l] {};

    for(int i=0; i<l; i++)
        cin>>loc[i].first>>loc[i].second;

    for(int i=0; i<t; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        for(int j=0; j<l; j++)
            if(abs(loc[j].first-a)<=c && abs(loc[j].second-b)<=c)
                check[j]=1;
    }

    for(int i=0; i<l; i++)
        if(check[i]) ans++;

    cout<<ans;
}