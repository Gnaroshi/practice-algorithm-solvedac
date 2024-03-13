// problem: Города
// id: 21530
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'C')
                v.push_back(i * n + j);
        }
    }

    int c = v.size() / 2 - 1, a = v[c] / n, b = v[c] % n;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < n; j++)
            cout << 1;
        cout << '\n';
    }
    for (int i = 0; i <= b; i++)
        cout << 1;
    for (int i = 0; i < n - b - 1; i++)
        cout << 2;
    cout << '\n';
    for (int i = 0; i < n - a - 1; i++)
    {
        for (int j = 0; j < n; j++)
            cout << 2;
        cout << '\n';
    }

    return 0;
}