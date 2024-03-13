// problem: Square
// id: 26547
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
        int iter = s.length();
        if (iter == 1)
            cout << s << '\n';
        else
        {
            cout << s << '\n';
            for (int i = 1; i < iter - 1; i++)
            {
                cout << s[i];
                for (int i = 0; i < iter - 2; i++)
                    cout << ' ';
                cout << s[iter - i - 1];
                cout << '\n';
            }
            reverse(s.begin(), s.end());
            cout << s << '\n';
        }
    }

    return 0;
}