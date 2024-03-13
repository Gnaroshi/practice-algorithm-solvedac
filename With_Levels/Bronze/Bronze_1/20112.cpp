// problem: 사토르 마방진
// id: 20112
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] != v[j][i])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}