// problem: 유레카이론
// id: 10448
// time taken: 12m 54s
#include <bits/stdc++.h>
using namespace std;

int t[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;

    for (int i = 1; i < 1001; i++)
        t[i] = i * (i + 1) / 2;

    while (tc--)
    {
        int kn;
        cin >> kn;
        bool isFound = false;
        int temp = 0;
        for (int i = 1; i < 1001; i++)
        {
            temp += t[i];
            if (isFound)
                break;
            if (temp >= kn)
            {
                temp -= t[i];
                break;
            }
            for (int j = i; j < 1001; j++)
            {
                temp += t[j];
                if (isFound)
                    break;
                if (temp >= kn)
                {
                    temp -= t[j];
                    break;
                }
                for (int k = j; k < 1001; k++)
                {
                    temp += t[k];
                    if (temp == kn)
                    {
                        isFound = true;
                        break;
                    }
                    if (temp >= kn)
                    {
                        temp -= t[k];
                        break;
                    }
                    temp -= t[k];
                }
                temp -= t[j];
            }
            temp -= t[i];
        }
        int ans = isFound ? 1 : 0;
        cout << ans << '\n';
    }
    return 0;
}