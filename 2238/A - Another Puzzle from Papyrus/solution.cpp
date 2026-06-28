#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl cout << endl
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, c;
        cin >> n >> c;
 
        vector<int> a(n), b(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        vector<int> as = a;
        vector<int> bs = b;
 
        sort(as.begin(), as.end());
        sort(bs.begin(), bs.end());
 
        ll best = -1;
 
        // without reorder
        bool flag = true;
        ll cost1 = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = false;
                break;
            }
            cost1 += a[i] - b[i];
        }
 
        if (flag)
            best = cost1;
 
 
        // with reorder
        flag = true;
        ll cost2 = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (as[i] < bs[i])
            {
                flag = false;
                break;
            }
            cost2 += as[i] - bs[i];
        }
 
        if (flag)
        {
            cost2 += c;   // reorder cost
            if (best == -1 || cost2 < best)
                best = cost2;
        }
 
        cout << best << endl;
    }
 
    return 0;
}