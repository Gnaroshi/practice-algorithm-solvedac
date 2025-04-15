// problem: 스택 2
// id: 28278
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vs = vector<string>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

struct Node {
  int num;
  Node *next;
  Node(int num) : num(num), next(nullptr) {}
};

class Stack {
private:
  Node *top;
  int cnt = 0;

public:
  Stack() : top(nullptr) {}
  ~Stack() {
    while (!isEmpty()) {
      pop();
    }
  }

  bool isEmpty() { return top == nullptr; }

  void push(int num) {
    Node *newNode = new Node(num);
    newNode->next = top;
    top = newNode;
    cnt++;
  }

  int pop() {
    if (isEmpty()) {
      return -1;
    }

    int cur = top->num;
    Node *temp = top;
    top = top->next;
    delete temp;
    cnt--;
    return cur;
  }

  int curTop() {
    if (isEmpty()) {
      return -1;
    }
    return top->num;
  }

  int size() { return cnt; }
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Stack stack;
  int n, a, b;
  cin >> n;
  while (n--) {
    cin >> a;
    if (a == 1) {
      cin >> b;
      stack.push(b);
    } else if (a == 2) {
      cout << stack.pop() << '\n';

    } else if (a == 3) {
      cout << stack.size() << '\n';

    } else if (a == 4) {
      cout << stack.isEmpty() << '\n';

    } else if (a == 5) {
      cout << stack.curTop() << '\n';
    }
  }

  return 0;
}
