// problem: Egg Drop
// id: 11606
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n, k, f;
    string s;
    cin >> n >> k;

    int sf = 1, br = k;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> s;
        if (s[0] == 'S')
            sf = max(sf, f);
        else
            br = min(br, f);
    }
    cout << sf + 1 << ' ' << br - 1;

    return 0;
}