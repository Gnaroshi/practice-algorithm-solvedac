// problem: SMUPC의 등장
// id: 21734
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
        int c = s[i], t = 0;
        while (c > 0)
        {
            t += c % 10;
            c /= 10;
        }
        for (int j = 0; j < t; j++)
            cout << s[i];
        cout << '\n';
    }

    return 0;
}