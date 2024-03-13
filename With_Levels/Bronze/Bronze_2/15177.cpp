// problem: Kiwis vs Kangaroos
// id: 15177
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
    int cnt = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] -= 'A' - 'a';
        if (s[i] == 'a')
            cnt += 2;
        else if (s[i] == 'o')
            cnt += 2;
        else if (s[i] == 'n')
            cnt++;
        else if (s[i] == 'g')
            cnt++;
        else if (s[i] == 'i')
            cnt -= 3;
        else if (s[i] == 'w')
            cnt--;
        else if (s[i] == 'b')
            cnt--;
        else if (s[i] == 'd')
            cnt--;
    }
    if (cnt > 0)
        cout << "Kangaroos";
    else if (cnt < 0)
        cout << "Kiwis";
    else
        cout << "Feud continues";

    return 0;
}