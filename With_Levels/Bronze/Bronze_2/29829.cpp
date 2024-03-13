// problem: Palindroom
// id: 29829
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(4);
    for (auto &i : v)
        cin >> i;
    bool chk = true;
    for (int i = 0; i < 2; i++)
    {
        if (v[i] != v[4 - i - 1])
        {
            if (chk)
            {
                chk = false;
                v[i] = v[4 - i - 1];
            }
            else
            {
                cout << "EI";
                return 0;
            }
        }
    }
    cout << "JAH\n";
    for (auto i : v)
        cout << i << ' ';

    return 0;
}