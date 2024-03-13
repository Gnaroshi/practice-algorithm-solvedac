// problem: 패리티
// id: 4597
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        int cnt = 0;
        int iter = s.length() - 1;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        if (cnt % 2 == 0 && s[iter] == 'o')
            s[iter] = '1';
        else if (cnt % 2 == 1 && s[iter] == 'e')
            s[iter] = '1';
        else
            s[iter] = '0';
        cout << s << '\n';
    }

    return 0;
}