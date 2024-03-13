// problem: Cyanide Rivers
// id: 23787
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), mxl = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '0')
        {
            int cnt = 1;
            for (int j = i + 1; j < iter; j++)
            {
                if (s[j] == '1')
                    break;
                cnt++;
            }
            mxl = max(cnt, mxl);
            i += cnt - 1;
        }
    }
    cout << mxl / 2 + mxl % 2;

    return 0;
}