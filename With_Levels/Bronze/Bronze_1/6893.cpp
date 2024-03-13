// problem: TopYodeller
// id: 6893
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t, mx, rcc, dc, cur;
    cin >> n >> k;
    vector<int> sc(n, 0), r(n, -1);
    vector<int> cr(n), scr(n), ans;
    for (int i = 0; i < k; i++)
    {
        iota(cr.begin(), cr.end(), 0);
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            sc[j] += t;
        }
        sort(cr.begin(), cr.end(), [&](int a, int b)
             { return sc[a] > sc[b]; });

        rcc = 0;
        for (int j = 0; j < n;)
        {
            dc = j + 1;
            cur = sc[cr[j]];
            while (dc < n && sc[cr[dc]] == cur)
                dc++;
            for (int k = j; k < dc; k++)
                scr[cr[k]] = rcc;
            rcc += dc - j;
            j += dc - j;
        }

        for (int j = 0; j < n; j++)
            r[j] = max(r[j], scr[j]);
    }
    mx = *max_element(sc.begin(), sc.end());
    for (int i = 0; i < n; i++)
    {
        if (sc[i] == mx)
            ans.push_back(i);
    }
    for (auto i : ans)
    {
        cout << "Yodeller " << i + 1;
        cout << " is the TopYodeller: score " << sc[i];
        cout << ", worst rank " << r[i] + 1 << '\n';
    }

    return 0;
}