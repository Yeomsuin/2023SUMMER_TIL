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
    
    priority_queue<ll> pq;
    ll M = 0, a, ans = 1e9;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        M = max(M, a);
        pq.push(-a);
    }
    ll MM = M;

    while(1)
    {
        ll cur = -pq.top();
        pq.pop();

        ans = min(ans, MM - cur);
        
        if(cur == M)
            break;

        MM = max(MM, cur*2);
        pq.push(-cur*2);
    }

    cout << ans;

}