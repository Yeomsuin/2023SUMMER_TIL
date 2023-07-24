#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

int main()
{
    int T, n;
    cin >> T;

    int arr[55];

    while(T--)
    {
        long long ans = 0;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        
        sort(arr, arr+n);

        int l = 0, r = n-1;
        while(l < r)
        {
            ans += arr[r] - arr[l];
            l++;
            r--;
        }

        cout << ans << endl;
    }
}