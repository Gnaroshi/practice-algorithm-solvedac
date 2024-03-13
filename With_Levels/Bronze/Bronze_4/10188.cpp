// problem: Quadrilateral
// id: 10188
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
        int a, b;
        cin >> b >> a;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
                cout << "X";
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}