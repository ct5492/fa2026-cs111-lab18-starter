#include <iostream>
using namespace std;

// ---------- Part 1: value or reference? ----------
// Read these two functions. They look almost the same.
void doubleByValue(int n) { n = n * 2; }
void doubleByRef(int &n) { n = n * 2; }

// ---------- Part 2: swap (Step 2) ----------
// This swap compiles and runs, but it does NOT swap p and q in main.
// Find out why and fix it.
void swapNums(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

// ---------- Part 3: your own function (Step 3) ----------
// TODO: write orderPair(a, b) here.
// After the call, a holds the smaller number and b holds the larger one.
// Hint: swap only when a is bigger than b, and use references.

int main() {
  // Part 1: write your prediction in a comment BEFORE you run it.
  int x = 5;
  doubleByValue(x);
  cout << "after doubleByValue: " << x << endl;
  doubleByRef(x);
  cout << "after doubleByRef: " << x << endl;

  // Part 2
  int p = 3, q = 8;
  swapNums(p, q);
  cout << "after swap: p=" << p << " q=" << q << endl;   // goal: p=8 q=3

  // Part 3: remove the // when your orderPair is ready
  // int m = 9, n = 4;
  // orderPair(m, n);
  // cout << "ordered: m=" << m << " n=" << n << endl;     // goal: m=4 n=9

  // Gold: use orderPair three times to put a, b, c in order
  // int a = 7, b = 2, c = 5;
  // ...
  // cout << "sorted: " << a << " " << b << " " << c << endl;   // goal: 2 5 7

  return 0;
}
