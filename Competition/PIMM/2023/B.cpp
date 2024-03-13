// problem: B번 - 알파빌과 베타빌
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        bool chk = false;
        for (int j = 0; j < m; j++)
        {
            if (v[j] == t)
            {
                chk = true;
                break;
            }
        }
        cnt += !chk;
    }
    cout << cnt;

    return 0;
}