/* Name: Melissa Ma
Date: 2/22/2018

 Assignment: 4
Due Date: 3/2/2018
About this project: Using funtions and references, the program will simulate rolling
two die and return whether the user won any money and the amount if they did.
Assumptions: A dice has six sides and the user only enters integers.

All work below was performed by Melissa Ma */

#include <iostream>
using namespace std;

bool checkForWin(int,  int);
void rollDice(int&, int&);
void startMsg();

int main()
{
    int bet;                                //the amount the user decides to bet each round
    const int start = 500;                  //the user starts with $500, this doesn't change
    int winnings = 0;                       //the total amount of money the user won
    int losses = 0;                         //the total amount of money the user lost
    int a, b;                               //represents each of the dice rolls
    int money = start + winnings - losses;  //the amount of money the user has left
    srand(6);

    startMsg();

    while (money != 0)
    {cout << "You have $" << money <<  " remaining\n" << "Place your bet: ";
    cin >> bet;

        if (bet < 0) {cout << "\nYou're leaving with $" << money << endl;
            if (money > start){
            cout << "You MADE $" << winnings << "!!!" << endl; break;}
            else{
            cout << "You LOST $" << losses << "!!!" << endl; break;}}

        while (bet == 0) {
            cout << "You can't bet 0!" << endl;
        break;}

        while (bet > money) {
            cout << "You can't bet more $ than you have!\n" << endl;
        break;}

        while (bet <= money && bet != 0) {
            rollDice(a, b);
            cout << "You rolled " << a << " and " << b << " = " << a + b << endl;

            if (!checkForWin(a, b)) {
                cout << "You lose!!\n" << endl;
                losses += bet;
                money = start - losses + winnings;
                break;
            } else if (checkForWin(a, b)) {
                cout << "You win!\n" << endl;
                winnings = 2 * bet;
                money = start - losses + winnings;
                break;
                }
        }}

    cout << "Thanks for playing!" << endl;

    return 0;
}


// function that prints out 5 welcome lines
void startMsg(){
cout << "\n*** Welcome to SEVENS! The dice gamble game!***\n" <<
"Bet whatever you'd like. If you roll a 7, you win 2:1!\n" <<
"But if you don't roll a 7, you LOSE!\n" <<
"Enter a negative bet to exit at any time.\n" <<
"LETS PLAY!!!\n\n" << endl;}


// function that just rolls the dice twice
void rollDice(int&roll1, int &roll2)
{
    roll1= rand()%6 + 1;
    roll2 = rand()%6 + 1;
}


/* function that returns a win or loss value
 for the sum of the dice rolls*/
bool checkForWin(int a, int b)
{
    if(a + b == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}