// problem: Death Knight Hero
// id: 5013
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc, cnt = 0;
    cin >> tc;
    while (tc--)
    {
        bool isOk = true;
        string s;
        cin >> s;
        int iter = s.length();
        char bef = s[0];
        for (int i = 1; i < iter; i++)
        {
            if (bef == 'C' && s[i] == 'D')
            {
                isOk = false;
                break;
            }
            bef = s[i];
        }
        if (isOk)
            cnt++;
    }
    cout << cnt;

    return 0;
}