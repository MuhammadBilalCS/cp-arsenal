#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
  
        long long t1 = (n + x + y - 1) / (x + y);
        long long l = x * z;
        long long t2;
        if (l >= n)
        {
 
            t2 = (n + x - 1) / x;
        }
        else
        {
            long long r = n - l;
            long long extra = (r + x + 10 * y - 1) / (x + 10 * y);
            t2 = z + extra;
        }
 
        cout << min(t1, t2) << "
";
    }
}
 