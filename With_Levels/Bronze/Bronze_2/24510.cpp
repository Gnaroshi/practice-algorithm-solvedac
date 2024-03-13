// problem: 시간복잡도를 배운 도도
// id: 24510
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, mx = 0;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int iter = s.length(), cnt = 0;
        for (int i = 0; i < iter; i++)
        {
            // 0 1 2 3 4 5
            if (s[i] == 'f' && i + 3 <= iter)
            {
                if (s.substr(i, 3) == "for")
                {
                    cnt++;
                    i += 2;
                }
            }
            else if (s[i] == 'w' && i + 5 <= iter)
            {
                if (s.substr(i, 5) == "while")
                {
                    cnt++;
                    i += 4;
                }
            }
        }
        mx = max(cnt, mx);
    }
    cout << mx;

    return 0;
}