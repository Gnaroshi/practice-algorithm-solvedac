// problem: '나교수' 교수님의 악필
// id: 16462
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, tr, sm = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t != 100)
        {
            string s = to_string(t);
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '0' || s[i] == '6')
                    s[i] = '9';
            }
            sm += stoi(s);
        }
        else
            sm += t;
    }

    cout << round(double(sm) / n);

    return 0;
}