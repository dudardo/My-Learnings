#include <bits/stdc++.h>
using namespace std;

int main()

{
    int l, c, n, m, maxi=0, sum=0;
    cin>>l>>c>>m>>n;
    int a[l][c];
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++) cin>>a[i][j];

    for(int i=0; i<l; i+=m)
    {
        for(int j=0; j<c; j+=n)
        {
            for(int vi=0; vi<m; vi++)
            {
                for(int vj=0; vj<n; vj++)
                {
                    sum+=a[i+vi][j+vj];
                }
            }
            maxi= max(sum, maxi);
            sum=0;
        }
    }
    cout<<maxi<< "\n";


    
}