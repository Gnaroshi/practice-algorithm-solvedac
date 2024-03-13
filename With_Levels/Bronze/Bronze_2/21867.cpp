// problem: Java Bitecode
// id: 21867
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (auto i : s)
    {
        if (i == 'J' || i == 'A' || i == 'V' || i == 'A')
            cnt++;
    }
    if (cnt == n)
        cout << "nojava";
    else
    {
        for (auto i : s)
        {
            if (i == 'J' || i == 'A' || i == 'V' || i == 'A')
                continue;
            cout << i;
        }
    }

    return 0;
}