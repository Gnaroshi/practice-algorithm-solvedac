// problem: 그룹 단어 체커
// id: 1316
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ans = 0;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;

    while (tc--)
    {
        string temp;
        cin >> temp;
        int iter = temp.length();
        int cnts[27];
        fill(cnts, cnts + 27, 0);
        char cur = temp[0] - 'a';
        for (int i = 0; i < iter; i++)
        {
            int loc = temp[i] - 'a';
            if (cnts[loc] != 0)
            {
                cnts[loc] = 2;
                continue;
            }
            cnts[loc] = 1;
            int j = 0;
            while (true)
            {
                if (i + j == iter)
                    break;
                if (cur != temp[i + j] - 'a')
                {
                    cur = temp[i + j] - 'a';
                    break;
                }
                j++;
            }

            i += j - 1;
        }
        int isOk = 1;
        for (int i = 0; i < 26; i++)
            if (cnts[i] == 2)
            {
                isOk = 0;
                break;
            }
        ans += isOk;
    }
    cout << ans << '\n';

    return 0;
}