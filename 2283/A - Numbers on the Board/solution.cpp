#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl cout<<"
"
#define re return 0
#define vl vector<ll>
#define seedha(vec) sort(vec.begin(), vec.end())
#define for_i(a, b) for (ll i = a; i <= b; i++)
#define iba                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
 
int main() {
    iba;
    ll t;
    cin>> t;
    while(t--){
        ll l, r;
        cin>> l>> r;
        ll total= (r-l)+1;
        bool flag= false;
        for(ll k =total; k >=1;k--){
            for(ll i=l; i <= r-k + 1;i++){
                ll j=i +k - 1; 
                ll sum= 0;
                for(ll x=i; x<=j;x++){
                    sum+=x;
                }
                if(sum>=i && sum<=j){
                    cout<< total- k;
                    nl;
                    flag= true;
                    break; 
                }
                
            }
            if(flag)break;
    
        }
            
        }
        re;
            
    
    }