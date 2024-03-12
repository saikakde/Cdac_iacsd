#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2;
    cin >> s;
    cout << s<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length() - i-1])
        {
            cout << "false\n";
            return 0;
        }
    }
    cout << "true";
    
    return 0;
}