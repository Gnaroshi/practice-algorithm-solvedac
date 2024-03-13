// problem: Missing Number
// id: 21144
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, pos = 0, l = 1;
    cin >> n;
    string s, t;
    cin >> s;
    int iter = s.length();
    for (int i = 1; i <= n; i++)
    {
        t = to_string(i);
        if (t.length() > iter - pos)
        {
            cout << n;
            break;
        }
        if (t != s.substr(pos, t.length()))
        {
            cout << i;
            break;
        }
        pos += t.length();
    }

    return 0;
}