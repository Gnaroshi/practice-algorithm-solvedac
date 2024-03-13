// problem: Fiborooji Sequence
// id: 25802
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, cnt = 3, t;
    cin >> a >> b;
    set<pair<int, int>> s;
    s.insert({a, b});
    while (true)
    {
        t = a;
        a = b;
        b = (t + a) % 10;
        if (s.find({a, b}) != s.end())
            break;
        s.insert({a, b});
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}
