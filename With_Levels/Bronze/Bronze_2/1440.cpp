// problem: 타임머신
// id: 1440
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ':')
            s[i] = ' ';
    stringstream st;
    st.str(s);
    int n[3];
    for (int i = 0; i < 3; i++)
        st >> n[i];
    int ans = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                if (i != j && j != k && k != i)
                    if (n[i] >= 1 && n[i] <= 12)
                        if (n[j] >= 0 && n[j] <= 59)
                            if (n[k] >= 0 && n[k] <= 59)
                                ans++;
    cout << ans;
    return 0;
}