// problem: J박스
// id: 5354
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
        cin >> n;
        if (n == 1)
            cout << "#\n";
        else
        {
            for (int i = 0; i < n; i++)
                cout << '#';
            cout << '\n';
            for (int i = 0; i < n - 2; i++)
            {
                cout << "#";
                for (int j = 0; j < n - 2; j++)
                    cout << "J";
                cout << "#";
                cout << '\n';
            }
            for (int i = 0; i < n; i++)
                cout << '#';
            cout << '\n';
        }
        if (tc != 0)
            cout << '\n';
    }

    return 0;
}
