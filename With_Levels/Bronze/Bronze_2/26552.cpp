// problem: Zero
// id: 26552
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
        int n;
        cin >> n;
        n++;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                s[i] = '1';
        }
        cout << s << '\n';
    }

    return 0;
}