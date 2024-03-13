// problem: Positive Con Sequences
// id: 11517
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(4);
    int l;
    while (true)
    {
        cin >> v[0] >> v[1] >> v[2] >> v[3];
        if (v[0] == -1 && v[1] == -1 && v[2] == -1 && v[3] == -1)
            break;
        for (int i = 0; i < 4; i++)
            if (v[i] == -1)
                l = i;

        int ans = -1;
        for (int i = 1; i <= 10000; i++)
        {
            v[l] = i;
            if ((v[3] - v[2] == v[2] - v[1]) && (v[2] - v[1] == v[1] - v[0]))
            {
                ans = i;
                break;
            }
            else if ((double(v[3]) / double(v[2]) == double(v[2]) / double(v[1])) && (double(v[2]) / double(v[1]) == double(v[1]) / double(v[0])))
            {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}