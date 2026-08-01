// pandas
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    srand(time(0));
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for_i(0, n)
        {
            cin >> a[i];
        }
        for_j(0, m) { cin >> b[j]; }
        bool ok = (n >= 2 * m);
        if (ok)
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for (int j = 0; j < m && ok; j++)
                if (!(a[j] < b[j]))
                    ok = false;
            for (int j = 0; j < m && ok; j++)
                if (!(a[n - m + j] > b[j]))
                    ok = false;
        }
        cout << (ok ? "YES" : "NO");
        nl;
    }
}