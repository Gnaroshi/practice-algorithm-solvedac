// problem: The Middle Squares
// id: 27037
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    set<int> s;
    for (int i = 1;; i++)
    {
        if (s.find(n) != s.end())
        {
            cout << i - 1;
            return 0;
        }
        s.insert(n);
        t = ((n % 100) / 10) + ((n % 1000) / 100 * 10);
        n = (t * t) % 10000;
    }

    return 0;
}