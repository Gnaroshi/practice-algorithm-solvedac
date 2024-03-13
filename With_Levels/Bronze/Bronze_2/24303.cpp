// problem: ПРЪЧКИ
// id: 24303
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l;
    vector<pair<int, int>> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i].first;
    for (int i = 0; i < 3; i++)
        cin >> v[i].second;
    cin >> l;
    sort(v.begin(), v.end(), greater<>());
    int s = 0, cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        int iter = v[i].second;
        for (int j = 0; j < iter; j++)
        {
            s += v[i].first;
            cnt++;
            if (s >= l)
            {
                cout << cnt;
                return 0;
            }
        }
    }
    cout << 0;

    return 0;
}