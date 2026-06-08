/*
A. Cover in Water
time limit per test1 second
memory limit per test256 megabytes
Filip has a row of cells, some of which are blocked, and some are empty. He wants all empty cells to have water in them. He has two actions at his disposal:

1
 — place water in an empty cell.
2
 — remove water from a cell and place it in any other empty cell.
If at some moment cell i
 (2≤i≤n−1
) is empty and both cells i−1
 and i+1
 contains water, then it becomes filled with water.

Find the minimum number of times he needs to perform action 1
 in order to fill all empty cells with water.

Note that you don't need to minimize the use of action 2
. Note that blocked cells neither contain water nor can Filip place water in them.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the number of cells.

The next line contains a string s
 of length n
. The i
-th character of s
 is '.' if the cell i
 is empty and '#' if cell i
 is blocked.

Output
For each test case, output a single number — the minimal amount of actions 1
 needed to fill all empty cells with water.

Example
Input
5
3
...
7
##....#
7
..#.#..
4
####
10
#...#..#.#
Output
2
2
5
0
2 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i = 0; i<t;i++){
        int n;
        cin>>n;
        bool Three = false;
        // vector<char> s(n);
        // for(int j = 0;j<n;j++){
        //     cin>>s[j];
        // }
        string s;
        cin>>s;
        for(int j = 0;j<n-2;j++){
            if(s[j]=='.' && s[j+1]=='.' && s[j+2]=='.'){
                Three = true;
            }
        }
        if(Three){
            cout<<"2\n";
        }
        else{
            int count = 0;
            for(char c:s){
                if(c=='.'){
                    count++;
                }
            }
            cout<<count<<"\n";
        }
    }
}