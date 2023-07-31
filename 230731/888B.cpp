#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

bool check[200020];

int main()
{
    fio();
    
    int T, n, a;

    cin >> T;

    while(T--)
    {
        bool ans = true;
        priority_queue<int> even, odd;

        cin >> n;

        for(int i=0; i<n; i++)
        {
            cin >> a;

            if(a % 2 == 0)
            {
                check[i] = false;
                even.push(-a);
            }
            else{
                check[i] = true;
                odd.push(-a);
            }
        }

        
        int rec = -1;

        for(int i=0; i<n; i++)
        {
            int tmp;

            if(check[i])
            {
                tmp = -odd.top();
                odd.pop();
            }
            else
            {
                tmp = -even.top();
                even.pop();
            }

            if(rec > tmp)
            {
                ans = false;
                break;
            }

            rec = tmp;
        }

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}