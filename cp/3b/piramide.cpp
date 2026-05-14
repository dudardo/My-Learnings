#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int m[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            m[i][j]=min(min(n-j, n-i), min( i+1, j+1));
            cout<<m[i][j]<<' ';
        }
        cout<<endl;
    }
    
}