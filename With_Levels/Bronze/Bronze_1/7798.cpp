// problem: Hotel
// id: 7798
// time taken:
#include <bits/stdc++.h>
using namespace std;

struct hotel
{
    int bed_size;
    int room_capacity;
    int available_room;
    int price;
    string name;
    char bed_type;
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ":\n";
        int n, m, tn, tmn;
        char tb;
        cin >> n >> m;
        hotel *ht = new hotel[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ht[i].bed_size >> ht[i].room_capacity >>
                ht[i].available_room >> ht[i].price >> ht[i].name;
            if (20 <= ht[i].bed_size && ht[i].bed_size <= 35)
                ht[i].bed_type = 'A';
            else if (36 <= ht[i].bed_size && ht[i].bed_size <= 48)
                ht[i].bed_type = 'B';
            else if (49 <= ht[i].bed_size && ht[i].bed_size <= 62)
                ht[i].bed_type = 'C';
            else
                ht[i].bed_type = 'D';
        }
        for (int i = 0; i < m; i++)
        {
            cin >> tb >> tn >> tmn;
            int mn, mnb, mnp = 0x3f3f3f3f, sh = -1;
            for (int j = 0; j < n; j++)
            {
                if (ht[j].bed_type == tb)
                {
                    mn = min(tmn, ht[j].room_capacity);
                    mnb = (tn + mn - 1) / mn;
                    if (ht[j].available_room >= mnb)
                    {
                        mnb *= ht[j].price;
                        if (mnb < mnp)
                        {
                            mnp = mnb;
                            sh = j;
                        }
                        else if (mnb == mnp)
                        {
                            if (ht[sh].bed_size < ht[j].bed_size)
                                sh = j;
                        }
                    }
                }
            }
            if (sh != -1)
                cout << mnp << ' ' << ht[sh].name << '\n';
            else
                cout << "no-hotel\n";
        }
    }

    return 0;
}