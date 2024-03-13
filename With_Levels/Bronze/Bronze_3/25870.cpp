// problem: Parity of Strings
// id: 25870
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int al[26] = {0};
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        al[s[i] - 'a']++;
    bool e = true;
    bool o = true;
    for (int i = 0; i < 26; i++)
    {
        if (al[i])
        {
            if (al[i] % 2 == 1)
                e = false;
            else
                o = false;
        }
    }
    if (!e && !o)
        cout << 2;
    else if (e)
        cout << 0;
    else
        cout << 1;

    return 0;
}