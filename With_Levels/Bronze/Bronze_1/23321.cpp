// problem: 홍익 댄스파티
// id: 23321
// time taken:
#include <bits/stdc++.h>
using namespace std;

string dc[5] = {
    ".o.",
    "ow.",
    "mlo",
    "lnL",
    "n.n"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v(5);
    for (auto &i : v)
        cin >> i;
    int iter = v[0].length();
    int *stt = new int[iter];
    for (int j = 0; j < iter; j++)
    {
        if (v[2][j] == 'm')
            stt[j] = 1;
        else if (v[2][j] == 'l')
            stt[j] = 0;
        else
            stt[j] = 2;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < iter; j++)
            cout << dc[i][stt[j]];
        cout << '\n';
    }

    return 0;
}