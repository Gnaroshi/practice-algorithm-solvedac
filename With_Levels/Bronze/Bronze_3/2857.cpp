// problem: FBI
// id: 2857
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        int iter = s.length();
        bool chk = false;
        for (int j = 0; j < iter - 2; j++)
        {
            if (s[j] == 'F' && s[j + 1] == 'B' && s[j + 2] == 'I')
            {
                chk = true;
                break;
            }
        }

        if (chk)
            v.push_back(i + 1);
    }

    if (!v.empty())
    {
        for (auto i : v)
            cout << i << ' ';
    }
    else

        cout << "HE GOT AWAY!";

    return 0;
}