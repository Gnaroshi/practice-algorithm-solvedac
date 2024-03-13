#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> V(41);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    V[0].first = 1;
    V[0].second = 0;
    V[1].first = 0;
    V[1].second = 1;

    for (int i = 2; i < 41; i++)
    {
        V[i].first = V[i - 1].first + V[i - 2].first;
        V[i].second = V[i - 1].second + V[i - 2].second;
    }

    int tc;
    cin >> tc;

    while (tc--)
    {
        int temp;
        cin >> temp;
        cout << V[temp].first << " " << V[temp].second << '\n';
    }
    return 0;
}
