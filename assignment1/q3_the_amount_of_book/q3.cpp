#include<iostream>
#include<iomanip>
using namespace std;

/*
ANALYZE
=========================
1. PROBLEM: GET THE PRICE AFTER DISCOUNT
2. INPUT: PRICE, DISCOUNT
3. OUTPUT: DISPLAY THE PRICE OF BOOK, QUANTITY, PRICE BEFORE AND AFTER DISCOUNT
4. PROCESS: CALCULATE THE PRICE OF BOOK BEFORE AND AFTER DISCOUNT
==========================
PSEUDOCODE
1. BEGIN
2. GET THE PRICE OF BOOK, QUANTITY
3. CALCULATE THE PRICE AFTER DISCOUNT
5. DISPLAY THE PRICE OF BOOK BEFORE AND AFTER DISCOUNT
===========================
*/

int main(){

    double PRICE;
    int QUANTITY;

    cout << "\nCALCULATE THE AMOUNT OF BOOK" << endl;
    cout << "====================================" << endl;
    cout << "\nEnter the Price for a book: " << endl;
    cin >> PRICE;
    cout << "Enter the Quantity for a book: " << endl;
    cin>>QUANTITY;

    double BEFORE_DISCOUNT = PRICE * QUANTITY;
    double AFTER_DISCOUNT = BEFORE_DISCOUNT - (0.05 * (PRICE * QUANTITY));

    cout << "\nPrice for a book: RM";
    cout << setprecision(2) <<fixed << PRICE << endl;
    cout << "Quantity: " << QUANTITY << endl;
    cout << "Price before discount: RM";
    cout << setprecision(2)<<fixed << BEFORE_DISCOUNT << endl;
    cout << "Price after discount: RM";
    cout << setprecision(2) <<fixed << AFTER_DISCOUNT << endl;
}