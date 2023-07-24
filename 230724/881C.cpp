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
    
    int T;
    cin >> T;

    while(T--)
    {
       long long n, sum = 0;

       cin >> n;

       while(n != 1)
       {
            sum += n;
            n /= 2;
       }

       cout << sum +1<< endl;
    }
}