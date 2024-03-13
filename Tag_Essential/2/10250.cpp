#include <iostream>
using namespace std;

int main(void)
{
    int tc; cin>>tc;
    int h, w, cus;
    int floor, room;
    for (int i = 0; i < tc; i++)
    {
        cin>>h>>w>>cus;
        floor = 0;
        room = 1;
        
        int tempCus = cus;
        while(tempCus > 0)
        {
            if(tempCus <= h)
            {
                floor = tempCus;
                break;
            }
            tempCus -= h;
            room++;
        }

        if (room < 10)
        {
            cout<<floor<<"0"<<room<<endl;
        }
        else
        {
            cout<<floor<<room<<endl;
        }
    }


    return 0;
}