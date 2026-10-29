#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int k,n, w;
	int amount=0;
	cin>> k>> n>>w;
	for(int i=1; i<=w; i++){
	    amount+= k*i;
	    
	}
	if(amount>n){
	    cout << amount-n;}
	else{
	    cout<< 0;
	}
	
	
 
}