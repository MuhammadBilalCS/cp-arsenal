#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int check = a[k - 1];
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= check && a[i] > 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;
}