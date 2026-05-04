#include <bits/stdc++.h>
using namespace std;

int main()
{
    int o, n, d, t, u;
    pair<int, string> a[5]={{0, ""}};
    while(cin>>o>>n>>d>>t>>u)
    {
        a[0].first+=o;
        a[1].first+=n;
        a[2].first+=d;
        a[3].first+=t;
        a[4].first+=u;
    }
    
    a[0].second="NINHO";
    a[1].second="CONDENSADO";
    a[2].second="TAPIOCA";
    a[3].second="MORANGO";    
    a[4].second="CHOCOLATE";

    
    sort(a, a+5);
    cout<<a[4].second;
    
}