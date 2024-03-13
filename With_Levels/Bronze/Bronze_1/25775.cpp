// problem: Letter Frequency
// id: 25775
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
    {
        cin >> i;
        mx = max(mx, int(i.length()));
    }
    int **cnt = (int **)malloc(sizeof(int *) * mx);
    for (int i = 0; i < mx; i++)
    {
        cnt[i] = (int *)malloc(sizeof(int) * 26);
        fill(cnt[i], cnt[i] + 26, 0);
    }
    for (int i = 0; i < n; i++)
    {
        int iter = v[i].length();
        for (int j = 0; j < iter; j++)
        {
            cnt[j][v[i][j] - 'a']++;
        }
    }
    for (int i = 0; i < mx; i++)
    {
        cout << i + 1 << ": ";
        int cmx = *max_element(cnt[i], cnt[i] + 26), l;
        vector<char> t;
        for (int j = 0; j < 26; j++)
        {
            if (cnt[i][j] == cmx)
                t.push_back(char('a' + j));
        }
        l = t.size();
        for (int j = 0; j < l; j++)
        {
            cout << t[j] << (j != l - 1 ? ' ' : '\n');
        }
    }

    return 0;
}