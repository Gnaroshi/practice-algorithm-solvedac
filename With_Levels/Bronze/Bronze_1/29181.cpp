// problem: Кубики
// id: 29181
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s = 0, a, b, tp = 0, bt = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        s += i;
    }
    a = s / n, b = s % n;
    if (b > n / 2)
        a++;
    for (auto i : v)
    {
        if (i > a)
            tp += i - a;
        else if (i < a)
            bt += a - i;
    }
    cout << max(tp, bt);

    return 0;
}