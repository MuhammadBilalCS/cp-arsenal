#include <bits/stdc++.h>
using namespace std;
#define nl cout << "
"
#define re return 0
#define ll long long int
#define ld long double
#define vl vector<ll>
#define vs vector<string>
#define vlp vector<pair<ll, ll>>
 
int main(){
    ll n;
    cin>> n;
    
    string s;
    cin>> s;
    
    // if(n==1){
    //     cout<< 0;
    //     break;
    // }
    // if(n==2){
    //     if((s[0]=='U' && s[1]=='U') || (s[0]=='R' && s[1]=='R')){
    //         cout<< 0;
            
    //     }
    //     else{
    //         cout<< 1;
    //         break;
    //     }
    // }
          ll count=0;
          ll x=0; 
          ll y=0;
          ll coin=0;
  
    
    for (char c: s){
          
        if (c == 'R') x++;
        else if (c == 'U') y++;
        int current= 0;
        if (x>y) current= 1;
        else if (x < y) current= -1;
        if (count != 0 && current!= 0 && current!= count) {
            coin++;
            count= current;
        }else if (current!= 0) {
            count= current;
        }
       
    }
     cout << coin;
     nl;
     re;
 
    
    
    
}
 