// problem: Треугольники
// id: 22098
// time taken:
#include <bits/stdc++.h>
using namespace std;

int sq(int a, int b)
{
    return a * a + b * b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> v(4);
        for (auto &i : v)
            cin >> i;
        int ans[3] = {0};
        sort(v.begin(), v.end(), greater<>());
        for (int i = 0; i < 2; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                for (int k = j + 1; k < 4; k++)
                {
                    if (v[i] >= v[j] + v[k])
                        continue;
                    if (sq(v[k], v[j]) == v[i] * v[i])
                        ans[0]++;
                    else if (sq(v[k], v[j]) > v[i] * v[i])
                        ans[1]++;
                    else
                        ans[2]++;
                }
            }
        }
        cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
    }

    return 0;
}