#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n{};
    cin>>n;
    int s;
    if(n%5==0){
        cout<< n/5;
        
    }
    else{
        s=n/5;
        
    }
    if(n%5<=5 && n%5>=1){
        s+=1;
         cout<<s;
        
    }
   
}