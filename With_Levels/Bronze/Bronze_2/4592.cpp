// problem: 중복을 없애자
// id: 4592
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, bef;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cin >> bef;
        cout << bef << ' ';
        for (int i = 1; i < n; i++)
        {
            cin >> t;
            if (t != bef)
                cout << t << ' ';
            bef = t;
        }
        cout << "$\n";
    }

    return 0;
}