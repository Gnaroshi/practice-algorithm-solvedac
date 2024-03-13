// problem: Arithmetic Sequence
// id: 6992
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
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        bool chk = true;
        if (n < 3)
        {
            cout << "The next 5 numbers after [";
            for (int i = 0; i < n; i++)
                cout << v[i] << ((i != n - 1) ? ", " : "]");
            cout << " are: [";
            if (n == 1)
            {
                for (int i = 0; i < 5; i++)
                    cout << v[0] << ((i != 4) ? ", " : "]");
            }
            else
            {
                int c = v[1], d = v[1] - v[0];
                for (int i = 0; i < 5; i++)
                {
                    c += d;
                    cout << c << ((i != 4) ? ", " : "]");
                }
            }
            cout << '\n';
            continue;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] - v[i - 1] != v[i + 1] - v[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
        {
            int c = v[n - 1], d = v[1] - v[0];
            cout << "The next 5 numbers after [";
            for (int i = 0; i < n; i++)
                cout << v[i] << ((i != n - 1) ? ", " : "]");
            cout << " are: [";
            for (int i = 0; i < 5; i++)
            {
                c += d;
                cout << c << ((i != 4) ? ", " : "]");
            }
        }
        else
        {
            cout << "The sequence [";
            for (int i = 0; i < n; i++)
                cout << v[i] << ((i != n - 1) ? ", " : "]");
            cout << " is not an arithmetic sequence.";
        }
        cout << '\n';
    }

    return 0;
}