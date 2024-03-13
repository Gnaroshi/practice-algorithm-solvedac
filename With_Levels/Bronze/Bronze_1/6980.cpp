// problem: Train Swapping
// id: 6980
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int cnt = 0, l;
        cin >> l;
        vector<int> v(l);
        for (auto &i : v)
            cin >> i;
        for (int i = 0; i < l - 1; i++)
        {
            for (int j = i + 1; j < l; j++)
            {
                if (v[i] > v[j])
                {
                    swap(v[i], v[j]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }

    return 0;
}