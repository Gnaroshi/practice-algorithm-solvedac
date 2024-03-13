// problem: 탕수육
// id: 13419
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
            cout << s << '\n'
                 << s << '\n';
        else
        {
            if (iter % 2)
            {
                for (int i = 0; i < iter; i += 2)
                    cout << s[i];
                for (int i = 1; i < iter; i += 2)
                    cout << s[i];
                cout << '\n';
                for (int i = 1; i < iter; i += 2)
                    cout << s[i];
                for (int i = 0; i < iter; i += 2)
                    cout << s[i];
                cout << '\n';
            }
            else
            {

                for (int i = 0; i < iter; i += 2)
                    cout << s[i];
                cout << '\n';
                for (int i = 1; i < iter; i += 2)
                    cout << s[i];
                cout << '\n';
            }
        }
    }

    return 0;
}