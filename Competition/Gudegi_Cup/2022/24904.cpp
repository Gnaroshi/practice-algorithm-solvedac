// problem: Baekjoon Wordline Judge
// id: 24904
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    int cnt[26] = {0};
    int cntp[5][26] = {0};
    vector<pair<int, char>> v(26);
    vector<vector<pair<int, char>>> vp;
    ifstream file("Competition\\Gudegi_cup\\2022\\24904.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            for (int i = 0; i < line.length(); i++)
            {
                cnt[line[i] - 'A']++;
                cntp[i][line[i] - 'A']++;
            }
        }
        int cnts = 0;
        for (auto &i : v)
        {
            i.first = 0;
            i.second = char('A' + cnts++);
        }
        for (int i = 0; i < 26; i++)
        {
            cout << char('A' + i) << ' ' << cnt[i] << '\n';
            v[i].first = cnt[i];
        }
        sort(v.begin(), v.end());
        for (auto &i : v)
            cout << i.first << ' ' << i.second << '\n';
        for (int i = 0; i < 5; i++)
        {
            vector<pair<int, char>> t;
            for (int j = 0; j < 26; j++)
            {
                t.push_back({cntp[i][j], char('A' + j)});
            }
            sort(t.begin(), t.end());
            vp.emplace_back(t);
        }
        for (int j = 0; j < 26; j++)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << vp[i][j].first << ' ' << vp[i][j].second << ' ';
            }
            cout << '\n';
        }

        file.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }

    return 0;
}

// 단어집에서 전체 빈도수
//  A 8740
//  B 2197
//  C 2704
//  D 3065
//  E 8365
//  F 1342
//  G 2090
//  H 2422
//  I 5203
//  J 428
//  K 2041
//  L 4374
//  M 2615
//  N 4124
//  O 5672
//  P 2501
//  Q 152
//  R 5403
//  S 7705
//  T 4269
//  U 3541
//  V 886
//  W 1320
//  X 378
//  Y 2694
//  Z 579
//  152 Q
//  378 X
//  428 J
//  579 Z
//  886 V
//  1320 W
//  1342 F
//  2041 K
//  2090 G
//  2197 B
//  2422 H
//  2501 P
//  2615 M
//  2694 Y
//  2704 C
//  3065 D
//  3541 U
//  4124 N
//  4269 T
//  4374 L
//  5203 I
//  5403 R
//  5672 O
//  7705 S
//  8365 E
//  8740 A
// 각 위치별 빈도수
//  26 X 19 Q 28 Q 3 Q 4 J
//  97 Q 20 J 70 J 20 X 5 Q
//  137 Z 35 F 151 X 47 J 10 V
//  228 Y 45 Z 179 Z 166 Z 52 Z
//  254 I 68 X 213 H 169 W 80 W
//  287 J 70 V 228 F 172 Y 102 B
//  297 V 103 G 282 Y 215 V 109 F
//  335 U 105 B 294 V 266 F 113 X
//  355 O 127 K 336 W 317 H 131 U
//  398 E 132 D 376 K 335 B 197 G
//  442 N 151 S 457 P 486 P 203 C
//  529 W 206 W 464 G 516 M 210 P
//  555 K 241 M 466 B 531 G 279 M
//  597 H 249 C 518 C 549 C 380 K
//  704 F 295 P 529 D 603 K 521 H
//  736 L 318 T 676 M 604 D 534 I
//  784 R 335 Y 714 S 667 U 584 O
//  795 G 512 N 815 T 685 S 695 L
//  867 D 774 H 863 U 922 O 876 N
//  903 M 888 L 1095 L 922 R 890 R
//  1053 P 1183 R 1104 E 960 L 933 D
//  1092 T 1545 U 1246 O 997 N 940 T
//  1114 A 1764 I 1297 N 1104 T 1293 A
//  1185 C 2131 E 1346 I 1305 I 1677 Y
//  1189 B 2565 O 1591 A 1661 A 1992 E
//  2003 S 3081 A 1624 R 2740 E 4152 S