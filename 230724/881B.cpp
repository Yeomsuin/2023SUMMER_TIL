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
    
    int T, n;
    cin >> T;

    int arr[222222];

    while(T--)
    {
        int cnt = 0;
        long long sum = 0;
        cin >> n;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
        }

       int flag = 0;

       for(int i=0; i<n; i++)
            if(arr[i] < 0)
            {
                int j;
                for(j=i+1; j<n; j++)
                    if(arr[j] > 0)
                        break;
                cnt++;
                i = j;
            }

        cout << sum << ' '<< cnt << endl;
    }
}