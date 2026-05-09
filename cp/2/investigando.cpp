#include <bits/stdc++.h>
using namespace std;
int main()
{
   for(int i = 0; i < n; i++)        // início do subvetor
    for(int j = i; j < n; j++)    // fim do subvetor
    {
        // subvetor de i até j
        for(int k = i; k <= j; k++)
            cout << A[k] << " ";
        cout << "\n";
    }

}