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

    int T, n, arr[55], m, k, h;

    cin >> T;

    while(T--)
    {
        cin >> n >> m >> k >> h;

        int ans = 0;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        
        for(int i=0; i<n; i++)
        {
            int t = abs(arr[i]-h);


            if(t != 0 && t % k == 0)
                if(t / k < m)
                    ans++;
        }
        cout << ans << endl;
    }
}