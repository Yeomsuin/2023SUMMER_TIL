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
    int n;
    string str;
    for(int i=0; i<3; i++)
    {
        cin >> str; 
        if(str[0] >= '0' && str[0] <= '9')
        {
            n = stol(str);
            n += 3-i;
        }
    }

    if(n % 3 ==0 && n % 5 ==0)
        cout << "FizzBuzz";
    else if(n % 3 == 0)
        cout << "Fizz";
    else if(n % 5 == 0)
        cout << "Buzz";
    else
        cout << n;
    
}