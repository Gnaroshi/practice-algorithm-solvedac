// problem: 오타맨 고창영
// id: 2711
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, iter;
        string s;
        cin >> a >> s;
        iter = s.length();
        a--;
        for (int i = 0; i < iter; i++)
            if (i != a)
                cout << s[i];
        cout << '\n';
    }

    return 0;
}