#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    if (!(cin >> n))
        return;
 
    vector<int> a(n);
    int maxv = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxv)
        {
            maxv = a[i];
        }
    }
 
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxv)
        {
            count++;
        }
    }
 
    cout << count << endl;
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