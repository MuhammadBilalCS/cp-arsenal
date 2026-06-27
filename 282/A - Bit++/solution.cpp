#include <bits/stdc++.h>
#include <string>
#include <string>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    int count = 0;
    while (tt--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count;
}