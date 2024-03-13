// problem: Bad Random Numbers
// id: 5948
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, bef;
    cin >> n;
    bef = n;
    set<int> s;
    s.insert(n);
    while (true)
    {
        cnt++;
        n = (n % 1000 - n % 100 + n % 100 - n % 10) / 10;
        n *= n;
        if (s.find(n) != s.end())
            break;
        s.insert(n);
        bef = n;
    }
    cout << cnt;

    return 0;
}