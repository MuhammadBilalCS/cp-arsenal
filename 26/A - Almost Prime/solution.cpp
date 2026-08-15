// pandas
#include <bits/stdc++.h>
using namespace std;
#define nl cout << "
"
#define re return 0
#define ll long long int
#define ld long double
#define vl vector<ll>
#define vll vector<vector<ll>>
#define vpii vector<pair<ll, ll>>
#define vvpii vector<vector<pair<ll, ll>>>
#define vb vector<bool>
#define vbb vector<vector<bool>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define vs vector<string>
#define vss vector<vector<string>>
#define yes(expr) (expr) ? cout << "yes" : cout << "no"
#define Yes(expr) (expr) ? cout << "Yes" : cout << "No"
#define YES(expr) (expr) ? cout << "YES" : cout << "NO"
#define seedha(vec) sort(vec.begin(), vec.end())
#define for_i(a, b) for (ll i = a; i <= b; i++)
#define for_j(a, b) for (ll j = a; j < b; j++)
#define for_k(a, b) for (ll k = a; k < b; k++)
#define loop(vec)      \
    for (auto x : vec) \
    cout << x << " "
#define iba                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
 
// void solve()
// {
 
// }
 
int main()
{
 
    iba;
    int n;
    cin >> n;
    int ans = 0;
    for_i(2, n)
    {
        int temp = i;
        int fr = 0;
 
        for (int p = 2; p * p <= temp; p++)
        {
            if (temp % p == 0)
            {
                ++fr;
                while (temp % p == 0)
                    temp /= p;
            }
        }
        if (temp > 1)
            ++fr;
 
        if (fr == 2)
            ++ans;
    }
 
    cout << ans;
    nl;
 
    re;
}