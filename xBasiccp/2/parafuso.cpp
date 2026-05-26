#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> est;
    int p;
    while(cin>>p)
    {
        est[p]++;
    }

    for(auto i:est)
    {
        if(i.second!=1)
        {
            cout<<"N"<<i.first<<" tem "<<i.second<<" exemplares\n";
        }else
            cout<<"N"<<i.first<<" tem apenas um exemplar\n";
    }

}