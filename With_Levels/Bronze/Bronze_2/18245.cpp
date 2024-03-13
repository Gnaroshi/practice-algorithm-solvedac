// problem: 이상한 나라의 암호
// id: 18245
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int rp = 2;
    while (true)
    {
        getline(cin, s);
        if (s == "Was it a cat I saw?")
            break;
        int iter = s.length();
        for (int i = 0; i < iter; i += rp)
            cout << s[i];
        cout << '\n';
        rp++;
    }

    return 0;
}