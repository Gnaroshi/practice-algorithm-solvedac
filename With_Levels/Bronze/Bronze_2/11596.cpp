// problem: Triangle
// id: 11596
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < 3; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}