/*
A. Game with Integers
time limit per test1 second
memory limit per test256 megabytes
Vanya and Vova are playing a game. Players are given an integer n
. On their turn, the player can add 1
 to the current integer or subtract 1
. The players take turns; Vanya starts. If after Vanya's move the integer is divisible by 3
, then he wins. If 10
 moves have passed and Vanya has not won, then Vova wins.

Write a program that, based on the integer n
, determines who will win if both players play optimally.

Input
The first line contains the integer t
 (1≤t≤100
) — the number of test cases.

The single line of each test case contains the integer n
 (1≤n≤1000
).

Output
For each test case, print "First" without quotes if Vanya wins, and "Second" without quotes if Vova wins.

Example
Input
6
1
3
5
100
999
1000
Output
First
Second
First
First
Second
First

*/

//HAPPY WITH THIS ONE. MAKING PROGRESS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        bool VanyaW=false;
        bool VovaW=false;
        
        for(int i=0;i<10;i++){
            if((n+1)%3==0 || (n-1)%3==0){//checking divisibility
                VanyaW=true;
            }
            else{
                VovaW=true;
            }
        }
        if(VanyaW){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
    return 0;
}