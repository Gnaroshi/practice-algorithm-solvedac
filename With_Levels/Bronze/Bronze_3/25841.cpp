// problem: Digit Count
// id: 25841
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, t;
    char c;
    cin >> a >> b >> c;
    int ans = 0;
    int ia = stoi(a);
    int ib = stoi(b);
    for (int i = ia; i <= ib; i++)
    {
        t = to_string(i);
        int iter = t.length();
        for (int j = 0; j < iter; j++)
        {
            if (t[j] == c)
                ans++;
        }
    }
    cout << ans;

    return 0;
}