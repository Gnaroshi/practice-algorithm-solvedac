// problem: Tour de BINUS
// id: 16585
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int a, b, t1 = 0, t2 = 0;
    string sa, sb;
    cin >> a >> sa >> b >> sb;
    if (sa == "right")
    {
        for (int i = a - 1; i < n; i++)
            t1 += v[i];
    }
    else
    {
        for (int i = a - 1; i >= 0; i--)
            t1 += v[i];
    }
    if (sb == "right")
    {
        for (int i = b - 1; i < n; i++)
            if (!v[i])
                t2++;
    }
    else
    {
        for (int i = b - 1; i >= 0; i--)
            if (!v[i])
                t2++;
    }
    cout << t1 << ' ' << t2;

    return 0;
}