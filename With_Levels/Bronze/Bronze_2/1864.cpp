// problem: 문어 숫자
// id: 1864
// time taken:
#include <bits/stdc++.h>
using namespace std;
char cp[] = {'-', '\\', '(', '@', '?', '>', '&', '%', '/'};
int cpi[] = {0, 1, 2, 3, 4, 5, 6, 7, -1};
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
        int m = 0, t = 1;
        reverse(s.begin(), s.end());
        for (auto i : s)
        {
            for (int j = 0; j < 9; j++)
            {
                if (cp[j] == i)
                {
                    m += t * cpi[j];
                    break;
                }
            }
            t *= 8;
        }
        cout << m << '\n';
    }

    return 0;
}