// problem: 랜덤 숫자 만들기
// id: 6500
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int chk[10000] = {0}, cnt = 1;
        chk[n] = 1;
        while (true)
        {
            t = n * n;
            string s = to_string(t);
            int l = s.length();
            for (int i = l; i < 8; i++)
                s.insert(s.begin(), '0');
            t = stoi(s.substr(2, 4));
            if (chk[t])
                break;
            cnt++;
            chk[t] = 1;
            n = t;
        }
        cout << cnt << '\n';
    }

    return 0;
}