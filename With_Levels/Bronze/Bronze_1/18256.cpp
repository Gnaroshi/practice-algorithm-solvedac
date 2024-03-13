// problem: Interleaved Periodic String
// id: 18256
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
        string s;
        cin >> s;
        bool a = false, b = false;
        for (auto i : s)
        {
            if (a && b)
                break;
            if (i == '0')
                a = true;
            else
                b = true;
        }
        cout << (a + b) << '\n';
    }

    return 0;
}