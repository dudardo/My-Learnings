#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,n, i=1;
    while(cin>>r>>n&&n)
    {
        if(r>27*n)
        {
            cout<<"\nCase "<<i<<": garantido";
        }else if(r<=n)
        {
            cout<<"\nCase "<<i<<": 0";
        }else
        {
            int ans;
            if(r%n==0) ans=r/n-1;
            else ans=r/n;
            
            cout<<"\nCase "<<i<<": "<<ans;
        }
        i++;
    }
}




