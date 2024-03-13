// problem: B번 - 준석이의 사탕 사기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    vector<int> v;
    int ans = 0;

    bool chk = true;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % 2 == 0)
        {
            chk = false;
            ans += t;
        }
        else
            v.push_back(t);
    }

    if (chk && n == 1)
        cout << 0;
    else
    {
        int iter = v.size();
        if (iter % 2 == 1)
        {
            sort(v.begin(), v.end(), greater<int>());
            for (int i = 0; i < iter - 1; i++)
                ans += v[i];
        }
        else
        {
            for (int i = 0; i < iter; i++)
                ans += v[i];
        }
        cout << ans;
    }

    return 0;
}