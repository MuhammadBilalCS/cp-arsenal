#include <bits/stdc++.h>
using namespace std;
#define nl cout << "
"
#define re return 0
#define ll long long int
#define ld long double
#define vl vector<ll>
#define vs vector<string>
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        string s, ss;
        cin >> s >> ss;
        
        unordered_map<char, int> freq2;
        for(char c : ss){ 
            freq2[c]++; 
        }
        
        string result = "";
        ll remaining_ss = ss.size(); 
        for(char c : s){
            if(freq2[c] > 0){
                freq2[c]--;
                remaining_ss--; 
            } else {
                result += c;
            }
        }
        string temp = result;
        sort(temp.begin(), temp.end());
        if(remaining_ss == 0 && temp == "isx"){
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    re;
}