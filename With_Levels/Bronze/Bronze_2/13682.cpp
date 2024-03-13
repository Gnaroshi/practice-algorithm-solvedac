// problem: Loop Musical
// id: 13682
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            cin >> h;
            v.push_back(h);
        }
        v[0] = v.back();
        v.push_back(v[1]);

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if ((v[i - 1] > v[i]) ^ (v[i] > v[i + 1]))
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}