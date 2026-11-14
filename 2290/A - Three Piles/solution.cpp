#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    ll n;
    cin>> n;
    while(n--){
        ll a,b,c;
        cin>> a>>b>>c;
        if((a==b)&&(b==c)&&(a==c)){cout<< "NO";}
        else if((b-a== 1) &&(c-b==1)){
            cout<< "YES";
        }
        else{
            cout<< "NO";
        }
        cout<<"
";
        
    }
    
	
 
}