// problem: Cypher
// id: 11297
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, m, y, k, iter;
    while (true)
    {
        cin >> d >> m >> y;
        if (d + m + y == 0)
            break;
        k = (d + m + y) % 25 + 1;
        cin.ignore();
        string s, t;
        getline(cin, s);
        for (auto j : s)
        {
            if (isalpha(j))
                cout << char((j - 'a' - k + 26) % 26 + 'a');
            else
                cout << j;
        }
        cout << '\n';
    }

    return 0;
}