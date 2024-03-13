// problem: Nine Knights
// id: 15095
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int cnt;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v(5);

    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[i][j] == 'k')
            {
                cnt++;
                for (int dir = 0; dir < 8; dir++)
                {
                    int cx = i + dx[dir];
                    int cy = j + dy[dir];
                    if (cx < 0 || cx >= 5 || cy < 0 || cy >= 5)
                        continue;
                    if (v[cx][cy] == 'k')
                    {
                        cout << "invalid";
                        return 0;
                    }
                }
            }
        }
    }
    if (cnt != 9)
        cout << "in";
    cout << "valid";

    return 0;
}