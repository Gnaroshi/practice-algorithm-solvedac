#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int x; cin>>x;
    int y; cin>>y;
    int w; cin>>w;
    int h; cin>>h;

    if (x == w && y == h)
    {
        cout<<0;
    }
    else
    {
        // cout<<min(sqrt(x*x + y*y), min(sqrt((x-w)*(x-w)+y*y), min(sqrt(w*w+(h-y)*(h-y)), sqrt((x-w)*(x-w)+(h-y)*(h-y)))));
        cout<<min(x, min(y, min(w-x, h-y)));
    }


    return 0;
}