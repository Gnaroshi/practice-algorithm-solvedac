// problem: Clock Patience
// id: 6413
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        vector<vector<string>> v(13);
        vector<int> cnt(13, 4);
        int ls = 1;
        string t;
        cin >> t;
        if (t == "#")
            break;
        v[0].push_back(t);
        for (int i = 1; i < 52; i++)
        {
            cin >> t;
            v[i % 13].push_back(t);
        }
        reverse(v.begin(), v.end());

        t = v[12][0];
        cnt[12]--;
        while (true)
        {
            int l;
            char c = t.front();
            if (isalpha(c))
            {
                if (c == 'A')
                    l = 0;
                else if (c == 'T')
                    l = 9;
                else if (c == 'J')
                    l = 10;
                else if (c == 'Q')
                    l = 11;
                else
                    l = 12;
            }
            else
                l = c - '1';
            if (cnt[l] == 0)
                break;
            t = v[l][4 - cnt[l]];
            cnt[l]--;
            ls++;
        }
        if (ls < 10)
            cout << '0';
        cout << ls << ',' << t << '\n';
    }

    return 0;
}
