// problem: JOI ソート (JOI Sort)
// id: 20977
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[3] = {0};
    int n;
    string s;
    cin >> n >> s;
    for (auto i : s)
    {
        if (i == 'J')
            cnt[0]++;
        else if (i == 'O')
            cnt[1]++;
        else
            cnt[2]++;
    }
    for (int i = 0; i < 3; i++)
    {
        int iter = cnt[i];
        char c;
        if (i == 0)
            c = 'J';
        else if (i == 1)
            c = 'O';
        else
            c = 'I';
        for (int j = 0; j < iter; j++)
            cout << c;
    }

    return 0;
}