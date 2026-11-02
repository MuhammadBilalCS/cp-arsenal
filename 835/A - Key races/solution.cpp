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
    ll s, v1, v2, t1, t2;
    cin>> s >>v1>>v2>>t1>>t2;
    ll totaltime1= t1+(s*v1)+t1;
    ll totaltime12= t2+(s*v2)+t2;
    if(totaltime1<totaltime12){
        cout<< "First";
    }
    else if(totaltime1>totaltime12){
        cout<< "Second";
    }
    else if(totaltime1==totaltime12){
        cout<< "Friendship";
    }
    else{
        re;
    }
    re;
 
}
 