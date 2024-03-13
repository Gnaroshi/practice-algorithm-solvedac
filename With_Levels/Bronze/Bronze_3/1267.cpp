#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int callNum; cin>>callNum;
    int *callTimes = (int*)malloc(sizeof(int) * callNum);
    int feeY = 0;
    int feeM = 0;
    
    for (int i = 0; i < callNum; i++)
    {
        cin>>callTimes[i];
        feeY += floor(callTimes[i] / 30) * 10 + 10;
        feeM += floor(callTimes[i] / 60) * 15 + 15;
    }

    if (feeY == feeM)
    {
        cout<<"Y M "<<feeY;
    }
    else if (feeY < feeM)
    {
        cout<<"Y "<<feeY;
    }
    else
    {
        cout<<"M "<<feeM;
    }
    return 0;
}