// problem: Refrigerator Magnets
// id: 4575
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
        getline(cin, s);
        if (s == "END")
            break;
        bool chk = true;
        int cnt[26];
        fill(cnt, cnt + 26, 1);
        for (auto i : s)
        {
            if (isalpha(i))
            {
                if (cnt[i - 'A'] == 1)
                    cnt[i - 'A'] = 0;
                else
                {
                    chk = false;
                    break;
                }
            }
        }
        if (chk)
            cout << s << '\n';
    }

    return 0;
}