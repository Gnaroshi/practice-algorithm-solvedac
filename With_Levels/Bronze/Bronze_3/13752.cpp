// problem: 히스토그램
// id: 13752
// time taken:
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
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
            cout << '=';
        cout << '\n';
    }

    return 0;
}