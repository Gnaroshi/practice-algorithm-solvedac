#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    long a, b, v;
    cin>>a>>b>>v;

    long count = 0;
    if (v - a <= 0)
    {
        count = 1;
    }
    else
    {
        count += (v - a) / (a - b) + 1;
    }
    if ((v - a) % (a - b) != 0)
    {
        count++;
    }
    cout<<count;
    return 0;

}