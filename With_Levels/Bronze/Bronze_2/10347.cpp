// problem: Reverse Rot
// id: 10347
// time taken:
#include <bits/stdc++.h>
using namespace std;
char rt[28] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '_', '.'};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        string s, ans = "";
        cin >> s;
        reverse(s.begin(), s.end());
        for (auto c : s)
        {
            if (isalpha(c))
                ans += rt[(c - 'A' + n) % 28];
            else
            {
                if (c == '_')
                    ans += rt[(26 + n) % 28];
                else
                    ans += rt[(27 + n) % 28];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}