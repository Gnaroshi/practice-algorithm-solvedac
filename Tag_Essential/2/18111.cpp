#include <iostream>
using namespace std;

int main(void)
{
    int heightMax = 256;
    int ground[502][502];
    int timeMin = 1e9;
    int groundHeightMax = -1;
    int n, m, b; cin>>n>>m>>b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>ground[i][j];
        }
    }

    for (int groundHeight = 0; groundHeight <= heightMax; groundHeight++)
    {
        int inventory = 0;
        int remove = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int currentHeight = ground[i][j] - groundHeight;
                if (currentHeight < 0)
                {
                    inventory -= currentHeight;
                }
                else
                {
                    remove += currentHeight;
                }
            }
        }
        if (remove + b >= inventory)
        {
            int temp = 2 * remove + inventory;
            if (timeMin >= temp)
            {
                timeMin = temp;
                groundHeightMax = groundHeight;
            }
        }
    }

    cout<<timeMin<<" "<<groundHeightMax;
    return 0;
}