/*
A. Ambitious Kid
time limit per test1 second
memory limit per test256 megabytes
Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers [A1,A2,A3,…,AN]
. In one operation, Chaneka can choose one element, then increase or decrease the element's value by 1
. Chaneka can do that operation multiple times, even for different elements.

What is the minimum number of operations that must be done to make it such that A1×A2×A3×…×AN=0
?

Input
The first line contains a single integer N
 (1≤N≤105
).

The second line contains N
 integers A1,A2,A3,…,AN
 (−105≤Ai≤105
).

Output
An integer representing the minimum number of operations that must be done to make it such that A1×A2×A3×…×AN=0
.

Examples
Input
3
2 -6 5
Output
2
Input
1
-3
Output
3
Input
5
0 -1 0 1 0
Output
0
Note
In the first example, initially, A1×A2×A3=2×(−6)×5=−60
. Chaneka can do the following sequence of operations:

Decrease the value of A1
 by 1
. Then, A1×A2×A3=1×(−6)×5=−30
Decrease the value of A1
 by 1
. Then, A1×A2×A3=0×(−6)×5=0
In the third example, Chaneka does not have to do any operations, because from the start, it already holds that A1×A2×A3×A4×A5=0×(−1)×0×1×0=0



*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 100000;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }

    cout << ans << endl;

    return 0;
}