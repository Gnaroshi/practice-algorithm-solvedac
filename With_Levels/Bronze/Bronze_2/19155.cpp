// problem: Copying Homework
// id: 19155
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cout << (n - t + 1) << ' ';
    }

    return 0;
}