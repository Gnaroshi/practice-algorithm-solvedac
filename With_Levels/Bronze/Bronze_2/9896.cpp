// problem: Gray
// id: 9896
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int bef = s[0] - '0';
    cout << bef;
    for (int i = 1; i < n; i++)
    {
        cout << (bef + s[i] - '0') % 2;
        bef = s[i] - '0';
    }

    return 0;
}