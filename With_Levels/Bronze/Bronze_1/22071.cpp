// problem: Магические карточки
// id: 22071
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
        int n, l;
        cin >> n >> l;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<>());

        int sa = 0, sb = 0;
        for (int i = 0; i < l; i++)
            sa += a[i], sb += b[i];
        if (sa > sb)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}