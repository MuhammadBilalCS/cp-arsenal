#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
 
    while (t--)
    {
        string s;
        cin >> s;
 
        long long current_sum = 0;
        vector<int> savings;
 
        for (int i = 0; i < s.length(); i++)
        {
            int digit = s[i] - '0';
            current_sum += digit;
 
            if (i == 0)
            {
 
                savings.push_back(digit - 1);
            }
            else
            {
 
                savings.push_back(digit);
            }
        }
 
        if (current_sum <= 9)
        {
            cout << 0 << endl;
        }
        else
        {
 
            sort(savings.begin(), savings.end(), greater<int>());
 
            int moves = 0;
            for (int i = 0; i < savings.size(); i++)
            {
                current_sum -= savings[i];
                moves++;
 
                if (current_sum <= 9)
                {
                    break;
                }
            }
            cout << moves << endl;
        }
    }
 
    return 0;
}