#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, r, b;
    cin>>p;
    int P[p];
    for(int i=0; i<p;i++) cin>>P[i];
    bool SN=1;
    cin>>r>>b;
    for(int i=0; i<p;i++)
        if(P[i]<r&&P[i]>=r-b)
        {
            SN=0;
            break;
        }

    if(SN) cout<<"SIM";
    else cout<<"NAO";
}