// problem: 백설 공주와 일곱 난쟁이
// id: 3040
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ts = 0;
    vector<int> v(9);
    for (auto &i : v)
    {
        cin >> i;
        ts += i;
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (ts - v[i] - v[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k != i && k != j)
                        cout << v[k] << '\n';
                }
            }
        }
    }

    return 0;
}