/*
A. Bear and Big Brother
time limit per test1 second
memory limit per test256 megabytes
Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

Input
The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

Examples
Input
4 7
Output
2
Input
4 9
Output
3
Input
1 1
Output
1
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int l, b;
    cin>>l>>b; //weight of both bears
    
    int y=0; //year count
    while(l<=b){
        l=l*3; //labaks weight triples every year
        b=b*2; //bobs weight doubles
        y++;
    }
    if(l>b){
       cout<<y; //print when l strcitly greater than b
    }
    return 0;
}