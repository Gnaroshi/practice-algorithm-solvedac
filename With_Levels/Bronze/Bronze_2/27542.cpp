// problem: 絶対階差数列 (Sequence of Absolute Differences)
// id: 27542
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    copy(a.begin(), a.end(), b.begin());
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            a[j] = abs(b[j] - b[j + 1]);
        copy(a.begin(), a.end(), b.begin());
    }
    cout << a.front();

    return 0;
}