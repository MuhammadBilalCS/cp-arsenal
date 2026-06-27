// Pandas
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define nl cout << "
"
#define re return 0
#define fs first
#define sc second
#define pb push_back
 
int main()
{
    int n{};
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    bool flagg = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int angle = 0;
        for (int j = 0; j < n; j++)
        {
 
            if ((i >> j) & 1)
            {
                angle += a[j];
            }
            else
            {
                angle -= a[j];
            }
        }
 
                if (angle % 360 == 0)
        {
            flagg = true;
            break;
        }
    }
 
    if (flagg)
    {
        cout << "YES";
        nl;
    }
    else
    {
        cout << "NO";
        nl;
    }
 
    re;
}