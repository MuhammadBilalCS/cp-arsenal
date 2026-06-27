#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && a[i] < a[i - 1])
        {
            sorted = false;
        }
    }
 
    if (sorted)
    {
        cout << n << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }
    return 0;
}