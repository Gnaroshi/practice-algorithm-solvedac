// problem: 콰트로치즈피자
// id: 27964
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int cnt = 0;
    cin >> n;
    vector<string> v;
    string c = "Cheese";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int iter = s.length();
        if (iter < 6)
            continue;
        bool chOk = true;
        // cout << i << '\n';
        for (int j = iter - 6; j < iter; j++)
        {
            // cout << s[j] << ' ' << c[j] << '\n';
            if (s[j] != c[j - iter + 6])
            {
                chOk = false;
                break;
            }
        }
        if (!chOk)
            continue;
        string nc = s.substr(0, iter - 6);
        bool dubOk = true;
        for (auto t : v)
        {
            if (t == nc)
            {
                dubOk = false;
                break;
            }
        }
        // cout << dubOk << ' ' << cnt << ' ' << nc << '\n';
        if (dubOk)
        {
            v.push_back(nc);
            cnt++;
        }
    }
    if (cnt >= 4)
        cout << "yummy";
    else
        cout << "sad";

    return 0;
}