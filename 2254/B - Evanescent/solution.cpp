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
        string s;
        cin >> n >> s;
        vector<pair<char, int>> runs;
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && s[j] == s[i])
                ++j;
            runs.emplace_back(s[i], j - i);
            i = j;
        }
 
        int m = (int)runs.size();
        int ans = m;
 
        for (int i = 1; i + 1 < m; ++i)
        {
            if (runs[i].second == 1)
            {
                if (runs[i - 1].first == runs[i + 1].first)
                {
                    ans = m - 2;
                    break;
                }
                else
                {
                    ans = min(ans, m - 1);
                }
            }
        }
 
        cout << ans;
        nl;
    }
}