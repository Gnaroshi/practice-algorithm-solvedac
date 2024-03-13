// problem: 카드놀이
// id: 2511
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int as = 0, bs = 0, l = 0;
    vector<int> a(10), b(10);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
        {
            as += 3;
            l = 1;
        }
        else if (a[i] < b[i])
        {
            bs += 3;
            l = 2;
        }
        else
            as++, bs++;
    }
    if (!l)
        cout << "10 10\nD";
    else
    {
        cout << as << ' ' << bs << '\n';
        if (as == bs)
        {
            if (l == 1)
                cout << "A";
            else
                cout << "B";
        }
        else
        {
            if (as > bs)
                cout << "A";
            else
                cout << "B";
        }
    }

    return 0;
}