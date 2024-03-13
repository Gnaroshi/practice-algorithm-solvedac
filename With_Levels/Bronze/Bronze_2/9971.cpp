// problem: The Hardest Problem Ever
// id: 9971
// time taken:
#include <bits/stdc++.h>
using namespace std;
char pt[26] = {'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "ENDOFINPUT")
            break;
        if (s != "START" && s != "END")
        {
            string ans = "";
            for (auto i : s)
            {
                if (isalpha(i))
                    ans += pt[i - 'A'];
                else
                    ans += i;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}