// problem: Pen Pineapple Apple Pen
// id: 15881
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    n -= 3;
    for (int i = 0; i < n; i++)
    {
        if (s.substr(i, 4) == "pPAp")
        {
            cnt++;
            i += 3;
        }
    }
    cout << cnt;

    return 0;
}