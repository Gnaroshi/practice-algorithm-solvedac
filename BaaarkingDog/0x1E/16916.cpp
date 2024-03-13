#include <bits/stdc++.h>
using namespace std;

// naive
int ans = 0;
string s, p;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s >> p;

    int s_size = s.size();
    int p_size = p.size();
    int iter = s_size - p_size;
    if (iter < 0)
    {
        cout << ans;
        return 0;
    }
    iter++;
    for (int i = 0; i < iter; i++)
    {
        int j = 0;
        for (j = 0; j < p_size; j++)
        {
            // cout << "i: " << i << " j: " << j << '\n';
            if (p[j] != s[j + i])
                break;
        }
        // cout << "j: " << j << '\n';
        if (j == p_size)
        {
            ans = 1;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}