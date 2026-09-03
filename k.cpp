#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    int c[n], k[n];

    for(int i=0; i<n; i++) cin>>c[i];

    for(int i=0; i<n; i++) cin>>k[i];
    
    vector<pair<int, int>> a;

    for(int i=0;i<n; i++) a.push_back({c[i], k[i]});

    sort(a.begin(), a.end(), greater<>());

    int ans=0;
    for(int i=0;i<n; i++)
    {
        if(a[i].first<a[i].second)
        {
            cout<<-1;
            return 0;
        }

        if(i!=n-1)
            ans+=a[i].first;
        else
            ans+=a[i].second;

    }
    cout<<ans;
    return 0;
}
