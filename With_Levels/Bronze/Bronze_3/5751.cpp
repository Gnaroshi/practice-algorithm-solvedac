// problem: Head or Tail
// id: 5751
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int t, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t)
                cnt++;
        }
        cout << "Mary won " << n - cnt << " times and John won " << cnt << " times\n";
    }

    return 0;
}