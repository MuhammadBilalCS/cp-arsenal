#include <iostream>
using namespace std;
int main()
{
    string d;
    cin >> d;
    string h = "hello";
    int j = 0;
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] == h[j])
        {
            j++;
        }
       
    
    }
     if (j == 5)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    
 
    
 
}