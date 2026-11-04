//pandas
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "
"
#define re return 0
#define vl vector<ll>
#define iba ios_base::sync_with_stdio(false); cin.tie(nullptr)
int main() {
    iba;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vl a(n);
        for (ll i=0; i<n; i++) {
            cin>>a[i];
        }
        ll mx= 0;
        for (ll i = 0; i < n; i++) {
            ll cnt = 0;
            for (ll j = 0; j < n; j++) {
                if (a[j] %a[i]== 0) {
                    cnt++;
                }
            }
 
            mx=max(mx,cnt);
        }
        cout << n-mx;
        nl;
    }
 
    re;
}