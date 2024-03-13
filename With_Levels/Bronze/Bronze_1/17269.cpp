// problem: 이름궁합 테스트
// id: 17269
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dc[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, iter;
    string a, b;
    cin >> n >> m >> a >> b;
    vector<int> va, vb;
    if (n > m)
    {
        for (int i = 0; i < m; i++)
        {
            va.push_back(dc[a[i] - 'A']);
            va.push_back(dc[b[i] - 'A']);
        }
        for (int i = m; i < n; i++)
            va.push_back(dc[a[i] - 'A']);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            va.push_back(dc[a[i] - 'A']);
            va.push_back(dc[b[i] - 'A']);
        }
        for (int i = n; i < m; i++)
            va.push_back(dc[b[i] - 'A']);
    }

    iter = n + m;
    while (true)
    {
        for (int i = 1; i < iter; i++)
            vb.push_back((va[i] + va[i - 1]) % 10);
        va.resize(vb.size());
        copy(vb.begin(), vb.end(), va.begin());
        vb.clear();

        if (va.size() == 2)
            break;
        iter--;
    }
    cout << vb[0] * 10 + vb[1] << "%";

    return 0;
}