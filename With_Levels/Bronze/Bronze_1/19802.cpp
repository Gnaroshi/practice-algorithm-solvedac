// problem: Ребус
// id: 19802
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s)
    {
        bool chk = false;
        int a, b, iter = s.length();
        a = 0;
        b = iter;
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]) && !chk)
            {
                a = i * 2;
                chk = true;
            }
            if (chk && !isalpha(s[i]))
            {
                b = i - (iter - i);
                break;
            }
        }
        // cout << '\n'
        //      << "a: " << a << " b: " << b << '\n';
        cout << s.substr(a, b - a);
    }

    return 0;
}