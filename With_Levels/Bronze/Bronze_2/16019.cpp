// problem: Are we there yet?
// id: 16019
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(4);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < 5; i++)
    {
        int t = 0, c = i;
        vector<int> ans(5, 0);

        for (int j = c; j >= 0; j--)
        {
            if (j == i)
            {
                c--;
                continue;
            }
            t += v[c];
            ans[j] = t;
            c--;
        }
        t = 0, c = i;
        for (int j = c; j < 5; j++)
        {
            if (j == i)
            {
                continue;
            }
            t += v[c];
            ans[j] = t;
            c++;
        }

        for (int j = 0; j < 5; j++)
        {
            cout << ans[j];
            if (j < 4)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}