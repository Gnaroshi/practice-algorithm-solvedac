// problem: 암호
// id: 1718
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, p;
    getline(cin, s);
    cin >> p;
    int iter = s.length(), pl = p.length();
    for (int i = 0; i < iter; i++)
    {
        if (isalpha(s[i]))
        {
            cout << char((s[i] - 'a' + 25 - (p[i % pl] - 'a')) % 26 + 'a');
        }
        else
            cout << s[i];
    }

    return 0;
}