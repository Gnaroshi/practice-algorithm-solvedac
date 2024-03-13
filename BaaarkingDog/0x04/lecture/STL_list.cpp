#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    list<int> L = {1, 2};
    list<int>::iterator t = L.begin(); // auto t = L.begin() *C++11 이상
    L.push_front(10);                  // 10 1 2
    cout << *t << '\n';                // 1
    L.push_back(5);                    // 10 1 2 5
    L.insert(t, 6);                    // 10 6 1 2 5
    t++;                               // 2
    t = L.erase(t);                    // 5, 10 6 1 2

    cout << *t << '\n'; // 5
    for (auto i : L)
        cout << i << ' ';
    cout << '\n';
    for (list<int>::iterator it = L.begin(); it != L.end(); it++)
        cout << *it << ' ';

    return 0;
}