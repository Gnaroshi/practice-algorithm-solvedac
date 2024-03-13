#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int n; cin>>n;
    queue<int> cards;
    for (int i = 0; i < n; i++)
    {
        cards.push(i + 1);
    }

    int temp;
    while(true)
    {
        if (cards.size() == 1) break;
        cards.pop();
        temp = cards.front();
        cards.pop();
        cards.push(temp);

    }
    cout<<cards.front()<<"\n";
    return 0;
}