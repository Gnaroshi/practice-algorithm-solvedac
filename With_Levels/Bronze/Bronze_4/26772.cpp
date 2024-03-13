// problem: Poziome serca
// id: 26772
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << " @@@   @@@ ";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "@   @ @   @";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "@    @    @";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "@         @";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << " @       @ ";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "  @     @  ";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "   @   @   ";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "    @ @    ";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << "     @     ";
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';

    return 0;
}