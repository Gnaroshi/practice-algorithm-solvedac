// problem: 카카오뷰 큐레이팅 효용성 분석
// id: 24544
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s = 0, t = 0, b;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        s += i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if (!b)
            t += v[i];
    }
    cout << s << '\n'
         << t;

    return 0;
}