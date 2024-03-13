// problem: Canadians, eh?
// id: 24923
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length();
    if (s.substr(iter - 3, 3) == "eh?")
        cout << "Canadian!";
    else
        cout << "Imposter!";
    return 0;
}