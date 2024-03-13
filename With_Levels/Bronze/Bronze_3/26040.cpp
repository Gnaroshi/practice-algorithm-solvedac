// problem: 특정 대문자를 소문자로 바꾸기
// id: 26040
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, q;
    cin >> s;
    cin.ignore();
    getline(cin, q);
    int its = s.length(), itq = q.length();
    for (int i = 0; i < itq; i += 2)
    {
        char t = q[i];
        for (int j = 0; j < its; j++)
        {
            if (s[j] == t)
                s[j] = t - 'A' + 'a';
        }
    }
    cout << s;

    return 0;
}