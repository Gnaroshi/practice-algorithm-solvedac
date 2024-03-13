// problem: 점수 집계
// id: 9076
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
        vector<int> v(5);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        if (abs(v[1] - v[3]) >= 4)
            cout << "KIN\n";
        else
            cout << v[1] + v[2] + v[3] << '\n';
    }

    return 0;
}