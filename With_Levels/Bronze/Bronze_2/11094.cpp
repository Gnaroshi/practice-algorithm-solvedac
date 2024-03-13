// problem: 꿍 가라사대
// id: 11094
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        int iter = s.length();
        if (iter > 10)
            if (s.substr(0, 10) == "Simon says")
                cout << s.substr(10, iter - 10) << '\n';
    }

    return 0;
}