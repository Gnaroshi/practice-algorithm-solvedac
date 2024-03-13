// problem: Vera and ABCDE
// id: 15444
// time taken:
#include <bits/stdc++.h>
using namespace std;

string al[5][5] = {
    {"***",
     "*.*",
     "***",
     "*.*",
     "*.*"},
    {"***",
     "*.*",
     "***",
     "*.*",
     "***"},
    {"***",
     "*..",
     "*..",
     "*..",
     "***"},
    {"***",
     "*.*",
     "*.*",
     "*.*",
     "***"},
    {"***",
     "*..",
     "***",
     "*..",
     "***"}};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    vector<string> v;
    for (int i = 0; i < 5; i++)
        v.emplace_back("");
    for (auto i : s)
    {
        for (int j = 0; j < 5; j++)
            v[j] += al[i - 'A'][j];
    }
    for (auto i : v)
        cout << i << '\n';

    return 0;
}