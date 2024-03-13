// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    bool *isP = (bool *)malloc(sizeof(bool) * n + 1);
    fill(isP, isP + n + 1, 1);
    vector<int> p;
    for (int i = 2; i <= n; i++)
    {
        if (isP[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j > n)
                break;
            isP[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }
    cout << p.size();

    return 0;
}