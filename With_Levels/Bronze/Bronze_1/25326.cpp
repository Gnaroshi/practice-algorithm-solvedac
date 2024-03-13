// problem: 다중 항목 선호도 조사 (Small)
// id: 25326
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<tuple<string, string, string>> v;
    string sb, fr, co, csb, cfr, cco;
    for (int i = 0; i < n; i++)
    {
        cin >> sb >> fr >> co;
        v.push_back({sb, fr, co});
    }
    while (m--)
    {
        int cnt = 0, t;
        cin >> sb >> fr >> co;
        for (auto i : v)
        {
            t = 0;
            tie(csb, cfr, cco) = i;
            if (sb != "-")
            {
                if (sb == csb)
                    t++;
            }
            else
                t++;
            if (fr != "-")
            {
                if (fr == cfr)
                    t++;
            }
            else
                t++;
            if (co != "-")
            {
                if (co == cco)
                    t++;
            }
            else
                t++;
            cnt += (t == 3);
        }
        cout << cnt << '\n';
    }

    return 0;
}