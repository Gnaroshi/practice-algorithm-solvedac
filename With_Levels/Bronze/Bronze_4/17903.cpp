// problem: Counting Clauses
// id: 17093
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, t;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> t;
    if (m >= 8)
        cout << "satisfactory";
    else
        cout << "unsatisfactory";

    return 0;
}