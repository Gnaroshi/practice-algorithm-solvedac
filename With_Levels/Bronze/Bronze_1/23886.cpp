// problem: 알프수
// id: 23886
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    if (s[0] - s[1] >= 0 || s[iter - 2] - s[iter - 1] <= 0)
        cout << "NON ";
    else
    {
        for (int i = 2; i < iter; i++)
        {
            int t = (s[i] - s[i - 1]) * (s[i - 1] - s[i - 2]);
            if (t < 0)
                continue;
            else if (t == 0 || s[i] - s[i - 1] != s[i - 1] - s[i - 2])
            {
                cout << "NON ";
                break;
            }
        }
    }
    cout << "ALPSOO";

    return 0;
}