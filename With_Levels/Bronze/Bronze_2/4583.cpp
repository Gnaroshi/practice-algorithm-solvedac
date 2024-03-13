// problem: 거울상
// id: 4583
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
        string ans = "";
        int iter = s.length();
        bool chk = false;
        for (int i = iter - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
                ans.push_back('d');
            else if (s[i] == 'd')
                ans.push_back('b');
            else if (s[i] == 'p')
                ans.push_back('q');
            else if (s[i] == 'q')
                ans.push_back('p');
            else if (s[i] == 'i' || s[i] == 'o' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x')
                ans.push_back(s[i]);
            else
            {
                chk = true;
                break;
            }
        }
        if (chk)
            cout << "INVALID\n";
        else
            cout << ans << '\n';
    }

    return 0;
}