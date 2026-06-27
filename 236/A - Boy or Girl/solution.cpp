#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    char c;
    set<char> s;
    while (cin >> c)
        s.insert(c);
    cout << (s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}