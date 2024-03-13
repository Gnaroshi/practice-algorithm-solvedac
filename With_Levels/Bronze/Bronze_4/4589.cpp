#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << "Gnomes:\n";
    while (tc--)
    {
        int n[3];
        for (int i = 0; i < 3; i++)
            cin >> n[i];
        if (n[0] <= n[1] && n[1] <= n[2])
            cout << "Ordered";
        else if (n[0] >= n[1] && n[1] >= n[2])
            cout << "Ordered";
        else
            cout << "Unordered";
        cout << '\n';
    }

    return 0;
}