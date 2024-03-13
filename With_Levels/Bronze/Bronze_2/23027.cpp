// problem: 1번부터 문제의 상태가…?
// id: 23027
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    if (s.find('A') != string::npos)
    {
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F')
                s[i] = 'A';
        }
    }
    else if (s.find('B') != string::npos)
    {
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'C' || s[i] == 'D' || s[i] == 'F')
                s[i] = 'B';
        }
    }
    else if (s.find('C') != string::npos)
    {
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'D' || s[i] == 'F')
                s[i] = 'C';
        }
    }
    else
    {
        for (auto i : s)
            cout << 'A';
        return 0;
    }

    cout << s;
    return 0;
}