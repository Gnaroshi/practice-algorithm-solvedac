// problem: Divvying Up
// id: 20332
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long s = 0, t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += t;
    }
    if (s % 3 == 0)
        cout << "yes";
    else
        cout << "no";

    return 0;
}