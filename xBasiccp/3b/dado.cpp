#include <bits/stdc++.h>
using namespace std;

int main()

{

    int p, s;
    while(cin>>p>>s&&s)
    {
        
        int a, b, c,n, d1, d2, player=0;;
        bool win=0;
        cin>>a>>b>>c>>n;
    
        pair<int, bool> v[p];

        for(int i=0; i<p; i++) v[i].first=0, v[i].second=0;
        
        for(int i=0; i<n; i++)
        {
            
            if(v[player].second)
            {
                v[player].second=0;
                player++;
                if(player>=p)player=0;                
                i--;
                continue;
            }
            cin>>d1>>d2;
            
            v[player].first+=d1+d2;
            
            
            if(v[player].first==a || v[player].first==b ||v[player].first==c)
            {
                v[player].second=1;
            }

            if(v[player].first>s&&!win) 
            {   
                cout<<player+1<<endl;
                win=1;
            }
                
            
            player++;
            if(player>=p)player=0;

        }
        
    }

}