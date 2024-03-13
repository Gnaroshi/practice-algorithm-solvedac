// problem: Word Processor
// id: 18322
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, cur = 0;
    cin >> n >> k;
    string t;
    while (n--)
    {
        cin >> t;
        if (cur == 0)
        {
            cout << t;
            cur = t.length();
        }
        else if (cur + t.length() <= k)
        {
            cout << ' ' << t;
            cur += t.length();
        }
        else
        {
            cout << '\n'
                 << t;
            cur = t.length();
        }
    }

    return 0;
}