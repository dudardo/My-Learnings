#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, m;
    while(cin>>n>>m)
    {
        int a[n+2][m+2];
        bool np=1;

        for(int i=0; i<n+2; i++) 
            for(int j=0; j<m+2; j++)
                if (i == 0 || i == m+1 || j == 0 || j == n+1) 
                    a[i][j] = 0;
                else
                    cin>>a[i][j];
        
        for (int i = 1; i <= m; i++) 
            for (int j = 1; j <= n; j++) {
                if(a[i][j]>a[i+1][j+1] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i-1][j-1] &&
                   a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j-1] && a[i][j]>a[i-1][j+1] )
                {
                    cout<<i<<j<<endl;
                    np=0;
                }            
            }
        if(np) cout<<-1<<endl;
        cout<<endl;
    }
}