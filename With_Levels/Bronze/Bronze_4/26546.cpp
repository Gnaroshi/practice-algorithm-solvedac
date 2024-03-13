// problem: Reverse
// id: 26546
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
        string t;
        int a, b, iter;
        cin >> t >> a >> b;
        iter = t.length();
        for (int i = 0; i < iter; i++)
        {
            if (a <= i && i < b)
                continue;
            cout << t[i];
        }
        cout << '\n';
    }

    return 0;
}