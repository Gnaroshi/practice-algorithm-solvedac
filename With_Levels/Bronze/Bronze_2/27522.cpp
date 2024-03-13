// problem: 카트라이더: 드리프트
// id: 27522
// time taken:
#include <bits/stdc++.h>
using namespace std;
int pt[8] = {10, 8, 6, 5, 4, 3, 2, 1};

pair<int, char> fn(string s)
{
    int m, ss, sss;
    char c;
    stringstream st;
    st.str(s);
    st >> m >> ss >> sss >> c;
    return {(m * 60 + ss) * 1000 + sss, c};
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, char>> v;
    string s;
    for (int i = 0; i < 8; i++)
    {
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == ':')
                s[j] = ' ';
        }

        v.push_back({fn(s)});
    }

    sort(v.begin(), v.end());
    int t = 0;
    for (int i = 0; i < 8; i++)
    {
        if (v[i].second == 'R')
            t += pt[i];
        else
            t -= pt[i];
    }
    if (t > 0)
        cout << "Red";
    else
        cout << "Blue";

    return 0;
}