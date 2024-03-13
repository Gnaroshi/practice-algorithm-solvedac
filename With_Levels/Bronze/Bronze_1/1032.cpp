// problem: 명령 프롬프트
// id: 1032
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
    int iter = v.front().length();
    bool *chk = (bool *)malloc(sizeof(bool) * iter);
    fill(chk, chk + iter, true);
    for (int i = 0; i < iter; i++)
    {
        bool t = true;
        char c = v[0][i];
        for (auto k : v)
        {
            if (k[i] != c)
            {
                chk[i] = false;
                break;
            }
        }
    }
    for (int i = 0; i < iter; i++)
    {
        if (chk[i])
            cout << v[0][i];
        else
            cout << '?';
    }

    return 0;
}