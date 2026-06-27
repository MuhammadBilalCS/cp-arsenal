#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) st.pop();
        else st.push(c);
    }
    if (st.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
        
    }
    return 0;
}
    