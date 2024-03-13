// problem: 次の文字 (Next Character)
// id: 24084
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
    int iter = s.length() - 1;
    for (int i = 0; i < iter; i++)
    {
        if (s[i + 1] == 'J')
            cout << s[i] << '\n';
    }

    return 0;
}
