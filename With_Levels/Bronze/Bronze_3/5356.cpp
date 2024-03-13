// problem: Triangles
// id: 5356
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
        int n;
        char c;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << c;
            cout << '\n';
            c++;
            if (c > 'Z')
                c -= 'Z' - 'A' + 1;
        }
        cout << '\n';
    }

    return 0;
}