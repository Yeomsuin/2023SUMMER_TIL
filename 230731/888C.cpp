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

    int T, n, arr[200020], k;

    cin >> T;

    while(T--)
    {
        bool ans = true;

        cin >> n >> k;

        for(int i=0; i<n; i++)
            cin >> arr[i];

        int s = arr[0], e = arr[n-1];
        priority_queue<int> start, end;

        if(s == e)
        {
            int cnt = 0;
            for(int i=0; i<n; i++)
                if(s == arr[i])
                    cnt++;
            if(cnt < k)
                ans = false;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s == arr[i])
                    start.push(-i);
                else if(e == arr[i])
                    end.push(i);
            }

            if(start.size() < k || end.size() < k)
                ans = false;
            else
            {
                int s_e, e_s;
                for(int i=0; i<k ;i++)
                {
                    s_e = -start.top();
                    start.pop();
                }
                for(int i=0; i<k ;i++)
                {
                    e_s = end.top();
                    end.pop();
                }

                if(s_e > e_s)
                    ans = false;
            }
        }

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}