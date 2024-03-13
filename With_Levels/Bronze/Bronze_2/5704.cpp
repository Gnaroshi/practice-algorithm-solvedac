// problem: 팬그램
// id: 5704
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
        if (s == "*")
            break;
        bool cnt[26] = {0};
        for (auto i : s)
            cnt[i - 'a'] = 1;
        bool chk = true;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] == 0)
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? "Y\n" : "N\n");
    }

    return 0;
}