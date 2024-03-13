// problem: POT
// id: 11772
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += (pow(t / 10, t % 10));
    }
    cout << s;

    return 0;
}