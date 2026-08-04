// pandas
#include <bits/stdc++.h>
using namespace std;
#define nl cout << "
"
#define re return 0
#define ll long long int
#define ld long double
#define seedha(vec) sort(vec.begin(), vec.end())
#define for_i(a, b) for (ll i = a; i < b; i++)
#define for_j(a, b) for (ll j = a; j < b; j++)
#define for_k(a, b) for (ll k = a; k < b; k++)
#define loop(vec)      \
    for (auto x : vec) \
    cout << x << " "
#define iba                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
int main()
{
    iba;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;
 
        int oddA = 0, evenA = 0;
        int oddB = 0, evenB = 0;
 
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                if (a[i] == '1')
                    evenA++;
                if (b[i] == '1')
                    evenB++;
            }
            else
            {
                if (a[i] == '1')
                    oddA++;
                if (b[i] == '1')
                    oddB++;
            }
        }
 
        if (evenA == evenB && oddA == oddB)
            cout << "YES
";
        else
            cout << "NO
";
    }
}