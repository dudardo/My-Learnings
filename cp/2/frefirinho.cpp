#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, p, j, n, ans = -1, jogador = 1;
    cin >> a >> p >> j;
    int t[a];
    for(int i = 0; i < a; i++) t[i] = p;

    while(cin >> n)
    {
        t[n-1]--;

        if(n < a && t[n-1] == 1 && t[n] == 1)
        {
            ans = jogador;
            break;
        }

        jogador++;
        if(jogador > j) jogador = 1;
    }

    cout << ans;
}