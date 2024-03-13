// problem: Magnus
// id: 16755
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, h = "HONI";
    cin >> s;
    int ans = 0, cur = 0;
    for (auto i : s)
    {
        if (i == h[cur % 4])
            cur++;
    }
    cout << cur / 4;

    return 0;
}