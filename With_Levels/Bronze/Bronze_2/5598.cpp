// problem: 카이사르 암호
// id: 5598
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
    for (int i = 0; i < iter; i++)
    {
        if (s[i] - 3 < 'A')
            cout << char(s[i] + 23);
        else
            cout << char(s[i] - 3);
    }

    return 0;
}