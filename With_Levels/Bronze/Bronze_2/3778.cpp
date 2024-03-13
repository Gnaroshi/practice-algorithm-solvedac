// problem: 애너그램 거리
// id: 3778
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        int ca[26] = {0};
        int cb[26] = {0};
        int cnt = 0;
        for (auto i : a)
            ca[i - 'a']++;
        for (auto i : b)
            cb[i - 'a']++;
        for (int i = 0; i < 26; i++)
            cnt += abs(ca[i] - cb[i]);
        cout << "Case #" << tcc << ": " << cnt << '\n';
    }

    return 0;
}