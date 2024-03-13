#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int d; cin>>d;
    int h; cin>>h;
    int w; cin>>w;


    cout<<floor((d/ sqrt(h*h + w*w)) * h)<<" "<<floor((d/ sqrt(h*h + w*w)) * w);
    return 0;
}