// problem: Culture shock
// id: 25277
// time taken:
#include <bits/stdc++.h>
using namespace std;
string g[4] = {"he", "she", "him", "her"};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < 4; j++)
        {
            if (!s.compare(g[j]))
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}