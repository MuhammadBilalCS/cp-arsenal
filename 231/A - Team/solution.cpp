#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
 
    int n;
    cin >> n;
 
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            count++;
        }
    }
    cout << count;
}