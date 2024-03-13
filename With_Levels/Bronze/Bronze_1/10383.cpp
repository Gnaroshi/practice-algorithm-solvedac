// problem: The Cost of Moving
// id: 10383
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tcc = 1;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int ans = 0;
        vector<string> v(n), sv(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sv[i] = v[i];
        }
        sort(sv.begin(), sv.end());
        for (int i = 0; i < n; i++)
        {
            string cur = v[i];
            for (int j = 0; j < n; j++)
            {
                if (sv[j] == cur)
                {
                    ans += abs(i - j);
                    break;
                }
            }
        }
        cout << "Site " << tcc++ << ": " << ans << '\n';
    }

    return 0;
}