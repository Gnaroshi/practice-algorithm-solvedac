#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        map<string, int> M;
        string temp_name;
        string temp_type;
        while (n--)
        {
            cin >> temp_name >> temp_type;
            if (M.find(temp_type) == M.end())
                M.insert({temp_type, 1});
            else
                M[temp_type]++;
        }

        int not_naked = 1;
        for (pair<string, int> t : M)
            not_naked *= (t.second + 1);
        cout << --not_naked << '\n';
    }
    return 0;
}
