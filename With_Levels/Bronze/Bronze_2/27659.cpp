// problem: Queue skipping (Easy)
// id: 27659
// time taken:
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
        int n, e;
        cin >> n >> e;
        set<int> pc;
        for (int i = 1; i <= n; i++)
            pc.insert(i);
        vector<int> seq(e);
        for (auto &i : seq)
            cin >> i;
        reverse(seq.begin(), seq.end());
        for (int i = 0; i < e; i++)
        {
            if (pc.size() == 1)
                break;
            if (pc.find(seq[i]) != pc.end())
                pc.erase(seq[i]);
        }
        cout << *max_element(pc.begin(), pc.end()) << '\n';
    }

    return 0;
}