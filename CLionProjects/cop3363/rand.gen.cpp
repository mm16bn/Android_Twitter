//
// Created by Melissa on 2/20/18.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));             //only once, seed generator

    int r = rand();
    int small = rand()%10;      //giving remainders 0-9 ONLY

    cout << "Dice: " << endl;
    int dice = rand()%6 + 1;    //gives 0-5, add 1 = 1-6
    cout << dice << endl;

    cout << "Coin: " << endl;   //rolls a coin and prints the results! HEADS or TAILS
    int coin = rand()%2;
        if(coin ==1)
            {cout << "HEADS" << endl;}
        else
            {cout << "TAILS" << endl;}

    int rand_num = rand()%6 + 7;    //gives 0-5, add 7 = 7-12

    return 0;
}

//time, weather is always changing.