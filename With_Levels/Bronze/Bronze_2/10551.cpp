// problem: STROJOPIS
// id: 10551
// time taken:
#include <bits/stdc++.h>
using namespace std;

vector<string> v = {"1qaz", "2wsx", "3edc", "4rfv5tgb", "6yhn7ujm", "8ik,", "9ol."};
int cnt[8];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    for (auto i : s)
    {
        char c = i;
        if (isalpha(c))
            c = tolower(c);
        for (int j = 0; j < 8; j++)
        {
            if (j == 7)
                cnt[j]++;
            else
            {
                if (v[j].find(c) != string::npos)
                {
                    cnt[j]++;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < 8; i++)
        cout << cnt[i] << '\n';

    return 0;
}