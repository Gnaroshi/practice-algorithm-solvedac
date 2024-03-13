// problem: Rain Diary
// id: 27182
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (n - 7 > 0)
        cout << n - 7;
    else
        cout << m + 7;

    return 0;
}