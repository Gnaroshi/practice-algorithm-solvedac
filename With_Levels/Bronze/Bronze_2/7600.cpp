#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string temp;
        getline(cin, temp);
        if (temp.length() == 1 && temp[0] == '#')
            break;

        bool vist[26];
        fill(vist, vist + 26, false);
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] >= 'a' && temp[i] <= 'z' || temp[i] >= 'A' && temp[i] <= 'Z')
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                {
                    vist[temp[i] - 'a'] = true;
                }
                else if (temp[i] >= 'A' && temp[i] <= 'Z')
                {
                    vist[temp[i] - 'A'] = true;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (vist[i])
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}