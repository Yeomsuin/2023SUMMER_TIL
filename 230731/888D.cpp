#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
ll arr[200020] , target, check[200020];

int main()
{
    fio();

    int T, n;

    ll a;

    cin >> T;

    while(T--)
    {
        int over = 0;

        bool ans = true;
        cin >> n;
        memset(check,0,sizeof(check));

        target = (n*(n+1)) / 2;

        for(int i=0; i<n-1; i++)
            cin >> arr[i];

       
        if(arr[n-2] == target) // 중간이 날아감
        {    
            int flag = 0;
             if(arr[0] > n)
             {
                over = arr[0];
                flag = 1;
             }
            else
                check[arr[0]] = 1;

            for(int i=1; i<n-1; i++)
            {
                ll tmp = arr[i] - arr[i-1];

                if(tmp > n)
                {
            
                    if(flag)
                    {
                            
                        ans = false;
                        break;
                    }
                    over = tmp;
                    flag = 1;
                }
                else if(check[tmp] == 0)
                {
                    check[tmp] = 1;
                }
                else if(check[tmp] == 1)
                {
                    if(flag)
                    {
                
                        ans = false;
                        break;
                    }

                    flag = 1;
                    over = tmp;
                }
            }
 
            if(ans)
            {
                ll sum = 0;
                for(int i=1; i<=n; i++)
                    if(!check[i])
                        sum += i;
               //cout << sum << ' ' << over << endl;
                if(sum != over)
                    ans = false;
            }   

        }
        else // 끝이 날아감
        {
            if(arr[0] > n)
                ans = false;
            else
                check[arr[0]] = 1;

            if(ans)
                target -= arr[0];

            for(int i=1; i<n-1; i++)
            {
                ll tmp = arr[i] - arr[i-1];

                if(tmp > n)
                {
                    ans = false;
                    break;
                }
                else if(check[tmp] == 0)
                {
                    check[tmp] = 1;
                    target -= tmp;
                }                
                else if(check[tmp] == 1)
                {
                    ans = false;
                    break;
                }
            }

            if(ans)
            {
                if(target <=n  && check[target])
                    ans = false;
            }

        }
        



        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}