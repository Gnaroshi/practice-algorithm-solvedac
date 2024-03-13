// problem: Bike Tour
// id: 23901
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                cnt++;
        }
        cout << "Case #" << tcc << ": " << cnt << '\n';
    }

    return 0;
}