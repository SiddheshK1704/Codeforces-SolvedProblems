/*
A. Mishka and Game
time limit per test1 second
memory limit per test256 megabytes
Mishka is a little polar bear. As known, little bears loves spending their free time playing dice for chocolates. Once in a wonderful sunny morning, walking around blocks of ice, Mishka met her friend Chris, and they started playing the game.

Rules of the game are very simple: at first number of rounds n is defined. In every round each of the players throws a cubical dice with distinct numbers from 1 to 6 written on its faces. Player, whose value after throwing the dice is greater, wins the round. In case if player dice values are equal, no one of them is a winner.

In average, player, who won most of the rounds, is the winner of the game. In case if two players won the same number of rounds, the result of the game is draw.

Mishka is still very little and can't count wins and losses, so she asked you to watch their game and determine its result. Please help her!

Input
The first line of the input contains single integer n n (1 ≤ n ≤ 100) — the number of game rounds.

The next n lines contains rounds description. i-th of them contains pair of integers mi and ci (1 ≤ mi,  ci ≤ 6) — values on dice upper face after Mishka's and Chris' throws in i-th round respectively.

Output
If Mishka is the winner of the game, print "Mishka" (without quotes) in the only line.

If Chris is the winner of the game, print "Chris" (without quotes) in the only line.

If the result of the game is draw, print "Friendship is magic!^^" (without quotes) in the only line.

Examples
InputCopy
3
3 5
2 1
4 2
Output
Mishka
Input
2
6 1
1 6
Output
Friendship is magic!^^
Input
3
1 5
3 3
2 2
Output 
Chris
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mishka = 0;
    int chris = 0;

    while (n--) {
        int m, c;
        cin >> m >> c;

        if (m > c)
            mishka++;
        else if (c > m)
            chris++;
    }

    if (mishka > chris)
        cout << "Mishka";
    else if (chris > mishka)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}