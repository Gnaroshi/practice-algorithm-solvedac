#include <iostream>
using namespace std;

int main(void)
{
    int pNum; cin>>pNum;
    int area; cin>>area;
    int sPNum = pNum * area;
    int pNums[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>pNums[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            cout<<pNums[i] - sPNum<<" ";
        }
        else
        {
            cout<<pNums[i] - sPNum<<" ";
        }
    }

    return 0;
}