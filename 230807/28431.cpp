#include <bits/stdc++.h>

using namespace std;
using pint = pair<int,int>;
using pll = pair<long long, long long>;
using ll = long long;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

    int arr[11];


int main()
{
    int a;
    for(int i=0; i<5; i++)
    {
        cin >> a;
        arr[a]++;
    }

    for(int i=0; i<10; i++)
        if(arr[i] % 2 == 1)
        {
            cout << i;
            break;
        }
}