// problem: String LD
// id: 9377
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        vector<string> v;
        string t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }
        int ans = 0;
        while (true)
        {
            bool fnd = false;
            sort(v.begin(), v.end());
            for (int i = 0; i < n; i++)
            {
                if (v[i].length() == 1)
                {
                    fnd = true;
                    break;
                }
            }
            for (int i = 1; i < n; i++)
            {
                if (v[i - 1] == v[i])
                {
                    fnd = true;
                    break;
                }
            }
            if (fnd)
            {
                cout << ans << '\n';
                break;
            }

            for (int i = 0; i < n; i++)
                v[i] = v[i].substr(1, v[i].length() - 1);
            sort(v.begin(), v.end());
            for (int i = 1; i < n; i++)
            {
                if (v[i - 1] == v[i])
                {
                    fnd = true;
                    break;
                }
            }
            if (fnd)
            {
                cout << ans << '\n';
                break;
            }
            ans++;
        }
    }

    return 0;
}