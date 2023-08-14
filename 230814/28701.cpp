#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

int main()
{
    fio();

    int n;
    ll sum1 = 0, sum3 = 0;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        sum1 += i;
        sum3 += i * i* i;
    }
    cout << sum1 << endl << sum1 * sum1 << endl << sum3;
}