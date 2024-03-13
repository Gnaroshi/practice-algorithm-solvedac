// problem: Дети и буквы
// id: 30716
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    char bef = s[0];
    for (int i = 1; i < n; i++)
    {
        if (bef != s[i])
        {
            cout << "Yes\n";
            cout << 1 << ' ' << i + 1 << ' ' << 1;
            return 0;
        }
    }
    cout << "No";

    return 0;
}
