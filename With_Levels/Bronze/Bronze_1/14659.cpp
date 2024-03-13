// problem: 한조서열정리하고옴ㅋㅋ
// id: 14659
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0, t, cnt;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        t = v[i], cnt = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < t)
                cnt++;
            else
                break;
        }
        mx = max(mx, cnt);
    }
    cout << mx;

    return 0;
}