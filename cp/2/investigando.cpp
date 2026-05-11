#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long b = 1, a = 0;
    long long p = 0, ans = 0;

    for(int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        p += b;

        if(p % 2 == 0)
        {
            ans += a; 
            b++;
        }
        else
        {
            ans += b;   
            a++;
        }
    }

    cout << ans << "\n";
}