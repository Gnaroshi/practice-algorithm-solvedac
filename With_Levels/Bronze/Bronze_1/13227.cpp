// problem: TicTacToe
// id: 13227
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v(3);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < 3; i++)
    {
        if ((v[i][0] == v[i][1] && v[i][0] == v[i][2] && v[i][0] != '.') ||
            v[0][i] == v[1][i] && v[0][i] == v[2][i] && v[0][i] != '.')
        {
            cout << "YES";
            return 0;
        }
    }
    if ((v[0][0] == v[1][1] && v[0][0] == v[2][2] && v[0][0] != '.') ||
        v[2][0] == v[1][1] && v[2][0] == v[0][2] && v[1][1] != '.')
        cout << "YES";
    else
        cout << "NO";

    return 0;
}