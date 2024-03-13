// problem: Finalists
// id: 26310
// time taken:
#include <bits/stdc++.h>
using namespace std;

double m[5] = {0.56, 0.24, 0.14, 0.06, 0.3};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<double, string>> v;
    for (int i = 0; i < 6; i++)
    {
        string s;
        double t, ss = 0;
        cin >> s;
        for (int j = 0; j < 5; j++)
        {
            cin >> t;
            ss += t * m[j];
        }
        v.push_back({ss, s});
    }
    sort(v.begin(), v.end(), greater<>());
    int sl[6] = {0};
    for (int i = 0; i < n; i++)
    {
        sl[i % 6]++;
    }
    for (int i = 0; i < 6; i++)
    {
        if (v[i].second == "Taiwan")
        {
            cout << sl[i];
            break;
        }
    }

    return 0;
}