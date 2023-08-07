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
    
    int n, m, idx;

    vector<string> v, vv;
    cin >> n;

    v.resize(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];

        if(v[i].compare("?") == 0)
            idx = i;
        
    }

    cin >> m;
    string str;

    if(n == 1)
    {
        cin >> str;

        cout<< str;
        return 0;
    }



    vv.resize(m);
    for(int i=0; i<m; i++)
    {
        cin >> str;
        int flag = 1;
        for(int j=0; j<n; j++)
        {
            if(v[j].compare(str) == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            if(idx == 0)
            {
                if(v[1][0] == str.back())
                {
                    cout << str;
                    return 0;
                }
            }
            else if(idx == n-1)
            {
                
                if(str[0] == v[n-2].back())
                {
                    cout << str;
                    return 0;
                }
            }
            else
            {
                if(v[idx-1].back() == str[0] && v[idx+1][0] == str.back())
                {
                    cout << str;
                    return 0;
                }
            }
        }
    }
}