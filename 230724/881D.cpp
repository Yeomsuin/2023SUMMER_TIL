#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

int visited[222222];
ll ans[222222];
vector<int> edge[222222];

ll go(int v)
{
    ll sum = 1, cnt = 0;
    int flag = 1;
    for(int i=0; i<edge[v].size(); i++)
    {
        if(!visited[edge[v][i]])
        {
            flag = 0;
            visited[edge[v][i]] = 1;
            ans[v] += go(edge[v][i]);
        }
    }

    if(flag)
        return ans[v] = 1;
    else
        return ans[v];
}

int main()
{
    fio();
    
    int T, n;
    cin >> T;

    while(T--)
    {

        memset(visited, 0, sizeof(visited));
        memset(ans, 0, sizeof(ans));

        cin >> n;
        int a, b;
        for(int i=0; i<n-1; i++)
        {
            cin >> a >> b;
            edge[a].push_back(b);
            edge[b].push_back(a);
        }

        visited[1] = 1;
        
        int c = go(1);
       // for(int i=1; i<=n; i++)
          //  cout << ans[i] << endl;
        int q;
        cin >> q;

        for(int i=0; i<q; i++)
        {
            cin >> a >> b;
            cout << ans[a]*ans[b] << endl;
        }

        for(int i=1; i<=n; i++)
            edge[i].clear();
    }
}