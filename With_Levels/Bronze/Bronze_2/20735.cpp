// problem: Fifty Shades of Pink
// id: 20735
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    string s, p = "pink", r = "rose";

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int iter = s.length();
        for (int j = 0; j < iter; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                s[j] += 'a' - 'A';
            }
        }
        iter -= 3;
        for (int j = 0; j < iter; j++)
        {
            string ss = s.substr(j, 4);
            if (ss == p || ss == r)
            {
                cnt++;
                break;
            }
        }
    }
    if (cnt)
        cout << cnt;
    else
        cout << "I must watch Star Wars with my daughter";

    return 0;
}