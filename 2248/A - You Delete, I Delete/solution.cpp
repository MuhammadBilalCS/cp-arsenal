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
        string s;
        cin >> s;
        for_i(0, s.length())
        {
            if (s[i] == '0')
            {
                s[i] = ' ';
                break;
            }
        }
        for_i(0, s.length())
        {
            if (s[i] == '1')
            {
                s[i] = ' ';
                break;
            }
        }
        for_i(0, s.length())
        {
            if (s[i] != ' ')
                cout << s[i];
        }
        nl;
    }
}