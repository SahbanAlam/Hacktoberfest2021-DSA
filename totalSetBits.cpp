#include <bits/stdc++.h>
using namespace std;

// print number of set bits in a number (logn) solution
/*
  Sample I/N and O/P
  n = 6
  output = 2 (6 -> 110) 
  n = 11
  output = 3 (11 -> 1011)
*/

int main() {

    // take an integer input
    int n;
    cin >> n;
    // initialize count to 0
    int count = 0;
    while (n) {
        if (n & 1)
            count++;
        // divide n by 2 after every iteration
        n >>= 1;
    }
    cout << count << "\n";
    return 0;
}
