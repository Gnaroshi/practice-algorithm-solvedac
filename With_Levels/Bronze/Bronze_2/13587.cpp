// problem: huaauhahhuahau
// id: 13587
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chk(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t = "";
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (chk(s[i]))
            t += s[i];
    }
    bool ans = true;
    iter = t.length();
    for (int i = 0; i < iter / 2; i++)
    {
        if (t[i] != t[iter - i - 1])
        {
            ans = false;
            break;
        }
    }
    cout << (ans ? "S" : "N");

    return 0;
}