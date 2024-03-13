// problem: CTP공국으로 이민 가자
// id: 12778
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int m;
        char c;
        cin >> m >> c;
        if (c == 'C')
        {
            for (int i = 0; i < m; i++)
            {
                char t;
                cin >> t;
                cout << (t - 'A' + 1) << (i != m - 1 ? ' ' : '\n');
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                int t;
                cin >> t;
                cout << char(t + 'A' - 1) << (i != m - 1 ? ' ' : '\n');
            }
        }
    }

    return 0;
}