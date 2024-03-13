// problem: 단어 퍼즐
// id: 9946
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    int tcc = 1;
    while (true)
    {
        cin >> a >> b;
        if (a == b && a == "END")
            break;
        int cnt[26] = {0};
        for (auto i : a)
            cnt[i - 'a']++;
        for (auto i : b)
            cnt[i - 'a']--;
        bool chk = true;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] != 0)
            {
                chk = false;
                break;
            }
        }
        cout << "Case " << tcc++ << ": " << (chk ? "same\n" : "different\n");
    }

    return 0;
}