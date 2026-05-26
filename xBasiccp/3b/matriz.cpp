#include <bits/stdc++.h>
using namespace std;

int main()
{
    char SN='S';
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    for(int i=0; i<n; i++)
    {
        int p = -1;
        for(int j=0; j<m; j++)
            if(a[i][j]!=0) { p = j; break; }

        
        if(p == -1)
        {
            for(int k=i+1; k<n; k++)
                for(int j=0; j<m; j++)
                    if(a[k][j]!=0) { SN='N'; }
            continue;
        }

        
        for(int k=i+1; k<n; k++)
            for(int col=0; col<=p; col++)
                if(a[k][col]!=0) { SN='N'; }
    }

    cout<<SN<<endl;
}