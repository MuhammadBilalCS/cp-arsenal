#include <iostream>
#include <string>
#include <cctype> 
 
using namespace std;
 
int main() {
    string s;
    if (!(cin >> s)) return 0; 
 
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
 
    cout << s << endl;
    return 0;
}