//pandas
#include <bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
#define nl cout << endl
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<pair<int, int>> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i].first >> V[i].second;
    }
 
    sort(V.begin(), V.end());
    
 
    for (int i = 1; i < n; i++)
    {
        if (V[i].second < V[i - 1].second)
        {
            cout << "Happy Alex" ;
            nl;
            return 0;
        }
    }
   
    cout << "Poor Alex" ;
    nl;
    
    
}