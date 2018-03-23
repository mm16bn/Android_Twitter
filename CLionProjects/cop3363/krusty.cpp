/* Name: Melissa Ma
 Date: 2/8/2018
 Section: 8
 Assignment: 3
 Due Date: 2/12

 About this Project: We use loops to create a menu calculator to calculate the cost of food a customer buys from the Krusty Krab.
 Assumptions: All user inputs are integers.

 All work was performed by Melissa Ma */

#include <iostream>
#include <iomanip>
using namespace std;

double OrderTotal(int, int, int, int);              //declares the funtion OrderTotal, which calculates the total cost of food
void menu();                                        //declares the function menu, which prints out the menu of the Krusty Krab


int main() {
    int choice;                                     //takes in input as the customer orders which meal they want
    int a = 0; int b = 0; int c = 0; int d = 0;     //declares and sets number of meals to zero, to be added to user input num
    int num;                                        //takes in input as the customer chooses how many of the meal they want


    do{                                             //creates a loop that takes in user input until choice input becomes zero
        menu();
        cout << "What would you like? (enter 0 to finish order!): ";
        cin >> choice;

        if (choice ==0 && OrderTotal(a, b, c, d)==0)
        {cout << "Guess you aren't hungry.\n";}


        else if (choice == 1) {
            cout << "How many: ";
            cin >> num;

            while (num < 0)
            {cout << "You can't order a negative amount of food!\nTry Again: ";
                cin >> num;}
            a = a + num;

        } else if (choice == 2) {
            cout << "How many: ";
            cin >> num;

            while (num < 0)
            {cout << "You can't order a negative amount of food!\nTry Again: ";
                cin >> num;}
            b = b + num;

        } else if (choice == 3) {
            cout << "How many: ";
            cin >> num;

            while (num < 0)
            {cout << "You can't order a negative amount of food!\nTry Again: ";
                cin >> num;}
            c = c + num;

        } else if (choice == 4) {
            cout << "How many: ";
            cin >> num;

            while (num < 0)
            {cout << "You can't order a negative amount of food!\nTry Again: ";
                cin >> num;}
            d = d + num;


        } else if (choice != 0 && choice != 1 && choice!=2 && choice!=3 && choice!=4)
        {cout << "That isn't on the menu! Try again.\n" << endl;}

        if (cin.fail()){
            break;}

    }while(choice!=0);




    if (OrderTotal(a, b, c, d)!=0){
        cout << "\nYour order:\n";
        if (a!=0) {cout << a << " Krabby Patties.\n";}
        if (b!=0) {cout << b << " Barnacle Fries.\n";}
        if (c!=0) {cout << c << " Kelp Shakes.\n";}
        if (d!=0) {cout << d <<  " Krusty Krab Pizza.\n";}


        cout << "\nYour total is $" << fixed << showpoint << setprecision(2) << OrderTotal(a, b, c, d) << "\nEnjoy the food!" << endl;}


    return 0;
}


double OrderTotal(int k_patty, int b_fries, int k_shake, int k_k_pizza)       //function that calculates total cost of food customer ordered
{
    double total;
    total = (3.5 * k_patty) + (1.5 * b_fries) + (1 * k_shake) + (5 * k_k_pizza);
    return total;
}



void menu()                                                                  //function that prints out the menu of the Krusty Krab only
{
    cout << "----------- Menu -----------\n"
            "1. Krabby Patty ...... $3.50\n"
            "2. Barnicle Fries .... $1.50\n"
            "3. Kelp Shake ........ $1.00\n"
            "4. Krusty Krab Pizza . $5.00\n";
}



