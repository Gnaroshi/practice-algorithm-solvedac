// problem: 스키테일 암호
// id: 23080
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, iter;
    string s;
    cin >> k >> s;
    iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (i % k == 0)
            cout << s[i];
    }

    return 0;
}