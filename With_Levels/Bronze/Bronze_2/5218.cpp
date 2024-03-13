// problem: 알파벳 거리
// id: 5218
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
        cout << "Distances: ";
        string a, b;
        cin >> a >> b;
        int iter = a.length();
        for (int i = 0; i < iter; i++)
        {
            if (a[i] > b[i])
                cout << (b[i] - a[i]) + 26;
            else
                cout << b[i] - a[i];
            cout << ((i != iter - 1) ? ' ' : '\n');
        }
    }

    return 0;
}