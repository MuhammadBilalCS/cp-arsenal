// C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
 
int main() {
    int t;
    cin>> t;
    while (t--){
        int n; 
        cin>> n;
        vector<int>a(n);
        for(int i=0; i< n; i++){
            cin>> a[i];
        }
        sort(a.begin(), a.end());
        
        int m = a[n / 2];
        int l=0;
        int r=0;
          for (int x : a) {
            if (x < m) l++;
            else if (x > m) r++;
        }
        
        cout << max(l, r) << "
";
        
    }
 
    
}