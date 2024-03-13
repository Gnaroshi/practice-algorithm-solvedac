// problem: Starman
// id: 12791
// time taken:
#include <bits/stdc++.h>
using namespace std;

int rdy[2017];
vector<vector<string>> rdn(2017);

void fn()
{
    stringstream st;
    string s = "1967 DavidBowie 1969 SpaceOddity 1970 TheManWhoSoldTheWorld 1971 HunkyDory 1972 TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars 1973 AladdinSane 1973 PinUps 1974 DiamondDogs 1975 YoungAmericans 1976 StationToStation 1977 Low 1977 Heroes 1979 Lodger 1980 ScaryMonstersAndSuperCreeps 1983 LetsDance 1984 Tonight 1987 NeverLetMeDown 1993 BlackTieWhiteNoise 1995 1.Outside 1997 Earthling 1999 Hours 2002 Heathen 2003 Reality 2013 TheNextDay 2016 BlackStar";
    st.str(s);
    string y, n;
    while (st >> y >> n)
    {
        rdy[stoi(y)]++;
        rdn[stoi(y)].push_back(n);
    }
    return;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fn();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int cnt = 0, a, b;
        vector<pair<int, string>> ans;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (rdy[i])
            {
                for (int j = 0; j < rdy[i]; j++)
                    ans.push_back({i, rdn[i][j]}), cnt++;
            }
        }
        cout << cnt << '\n';
        if (cnt)
        {
            for (auto i : ans)
                cout << i.first << ' ' << i.second << '\n';
        }
    }
    return 0;
}