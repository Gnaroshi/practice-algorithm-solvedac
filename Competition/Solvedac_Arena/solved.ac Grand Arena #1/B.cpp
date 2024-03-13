// problem: B번 - 끝말잇기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, loc = 0;
    cin >> n;
    string t, ans;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.emplace_back(t);
        if (t == "?")
            loc = i;
    }
    cin >> m;
    if (n == 1)
    {
        cin >> t;
        cout << t;
    }
    else
    {
        if (loc == 0 || loc == n - 1)
        {
            char c;
            bool fnd = true;
            if (loc == 0)
            {
                c = v[1][0];
                for (int i = 0; i < m; i++)
                {
                    cin >> t;
                    if (fnd)
                    {
                        auto it = find(v.begin(), v.end(), t);
                        if (t.back() == c && it == v.end())
                        {
                            ans = t;
                            fnd = false;
                        }
                    }
                }
            }
            else
            {
                string e = v[n - 2];
                c = e.back();
                for (int i = 0; i < m; i++)
                {
                    cin >> t;
                    if (fnd)
                    {
                        auto it = find(v.begin(), v.end(), t);
                        if (t.front() == c && it == v.end())
                        {
                            ans = t;
                            fnd = false;
                        }
                    }
                }
            }
        }
        else
        {
            char a, b;
            bool fnd = true;
            a = v[loc - 1].back();
            b = v[loc + 1].front();
            for (int i = 0; i < m; i++)
            {
                cin >> t;
                if (fnd)
                {
                    auto it = find(v.begin(), v.end(), t);
                    if (t.front() == a && t.back() == b && it == v.end())
                    {
                        ans = t;
                        fnd = false;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}