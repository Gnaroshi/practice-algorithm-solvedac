// problem: 팰린드롬
// id: 10174
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
                s[i] = tolower(s[i]);
        }
        bool chk = true;
        for (int i = 0; i < iter / 2; i++)
        {
            if (s[i] != s[iter - i - 1])
                chk = false;
        }
        if (chk)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}