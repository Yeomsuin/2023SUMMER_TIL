#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

ll var[2][500050]; // 행, 열

int main()
{
    fio();
    
    int n, m, q;

    cin >> n >> m >> q;
    int a,b,c;
    for(int i=0; i<q; i++)
    {
        cin >> a >> b >> c;

        if(a ==1)
            var[0][b] += c;
        else
            var[1][b] += c;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout << var[0][i] + var[1][j] << ' ';
        cout << endl;
    }



}