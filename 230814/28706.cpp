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
    
    int T, n, v1, v2;    
    char ch1, ch2;
    bool check[8];
    cin>> T;

    while(T--)
    {
        for(int i=0; i<7; i++)  
            check[i] = 0;
        check[1] = true;
    
        cin >> n;
 

        for(int j=0; j<n; j++)
        {
            bool tmp[8] = {false, };
            
            cin >> ch1 >> v1 >> ch2 >> v2;

            if(ch1 == '+')
            {
                for(int i=0; i<7; i++)
                    if(check[i])
                        tmp[(i+v1)%7] = true;
            }
            else
            {
                for(int i=0; i<7; i++)
                    if(check[i])
                        tmp[(i*v1)%7] = true;
            }
            
            if(ch2 == '+')
            {
                for(int i=0; i<7; i++)
                    if(check[i])
                        tmp[(i+v2)%7] = true;
            }
            else
            {
                for(int i=0; i<7; i++)
                    if(check[i])
                        tmp[(i*v2)%7] = true;
            }

            for(int i=0; i<7; i++)
                check[i] = tmp[i];           
        }

        //for(int i=0; i<7; i++)
         //   cout << check[i] << ' ';

        if(check[0] == true)
            cout << "LUCKY" << endl;
        else 
            cout << "UNLUCKY" << endl;
    }
}