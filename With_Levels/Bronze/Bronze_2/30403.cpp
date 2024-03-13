// problem: 무지개 만들기
// id: 30403
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int cnt[26] = {0}, unt[26] = {0};
    for (auto i : s)
    {
        if (isupper(i))
            unt[i - 'A']++;
        else
            cnt[i - 'a']++;
    }
    bool a = false, b = false;

    if (cnt[17] != 0 && cnt[14] != 0 && cnt[24] != 0 && cnt[6] != 0 && cnt[1] != 0 && cnt[8] != 0 && cnt[21] != 0)
        a = true;
    if (unt[17] != 0 && unt[14] != 0 && unt[24] != 0 && unt[6] != 0 && unt[1] != 0 && unt[8] != 0 && unt[21] != 0)
        b = true;
    if (a && b)
        cout << "YeS";
    else if (a)
        cout << "yes";
    else if (b)
        cout << "YES";
    else
        cout << "NO!";

    return 0;
}