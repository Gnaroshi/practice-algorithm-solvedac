#include <iostream>

using namespace std;


int table[5001];
int main(void)
{

    int n; cin>>n;
    table[3] = 1;
    table[5] = 1;
    for (int i = 6; i < n + 1; i++)
    {
        if (table[i - 3] != 0)
        {
            table[i] = table[i - 3] + 1;
        }
        if (table[i - 5] != 0)
        {
            if (table[i] != 0)
            {
                table[i] = min(table[i], table[i - 5] + 1);
            }
            else table[i] = table[i - 5] + 1;
        }
    }
    if (table[n] == 0) cout<<"-1";
    else
    {
        cout<<table[n];
    }
    return 0;
}