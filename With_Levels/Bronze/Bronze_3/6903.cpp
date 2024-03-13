// problem: Trident
// id: 6903
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, s, h;
    cin >> t >> s >> h;
    for (int i = 0; i < t; i++)
    {
        cout << '*';
        for (int j = 0; j < s; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < s; j++)
            cout << ' ';
        cout << '*';
        cout << '\n';
    }
    cout << '*';
    for (int j = 0; j < s; j++)
        cout << '*';
    cout << '*';
    for (int j = 0; j < s; j++)
        cout << '*';
    cout << '*';
    cout << '\n';
    for (int i = 0; i < h; i++)
    {
        cout << ' ';
        for (int j = 0; j < s; j++)
            cout << ' ';
        cout << '*';
        cout << '\n';
    }

    return 0;
}