#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int t;
        cin >> t;
        int cnt = 0;
        while (t > 0)
        {
            cnt++;
            t /= 2;
        }
        if (cnt % 2 == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }

    return 0;
}