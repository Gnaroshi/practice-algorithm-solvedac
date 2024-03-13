// problem: 균형 잡힌 소떡소떡
// id: 25641
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int iter = s.length();
    int cs = 0, ct = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 's')
            cs++;
        else
            ct++;
    }

    int loc = 0;
    while (true)
    {
        if (cs == ct)
            break;
        if (s[loc] == 's')
            cs--;
        else
            ct--;
        loc++;
    }
    for (int i = loc; i < iter; i++)
        cout << s[i];

    return 0;
}