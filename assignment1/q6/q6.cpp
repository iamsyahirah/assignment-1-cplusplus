#include<iostream>
using namespace std;

/*
ANALYZE
==========================
1. PROBLEM: GET THE VALUE OF THE COINS 
2. OUTPUT: DISPLAY AMOUNT OF CENTS AND RINGGIT MALAYSIA
3. INPUT: VALUE THE CENTS
4. PROCESS: CALCULATE THE VALUE OF COINS IN CENTS AND RINGGIT MALAYSIA
==========================
PSEUDOCODE
==========================
1. BEGIN
2. GET THE TOTAL VALUE IN CENTS
3. CALCULATE THE NUMBER OF RINGGIT MALAYSIA BY DIVIDING THE TOTAL VALUE BY 100. RINGGIT = TOTAL_VALUE / 100 (RM1 EQUAL TO 100 CENTS)
4. CALCULATE THE REMAINING CENTS BY TAKING THE MODULUS OF THE TOTAL VALUE BY 100
5. DISPLAY THE CALCULATED VALUE  IN RINGGIT MALAYSIA AND CENTS.
6. END
==========================
*/

int main(){

    int TOTAL_VALUE;

    cout << "\nCALCULATE THE COINS VALUE." << endl;
    cout << "================================" << endl;
    cout << "\nEnter the total value of cents: " << endl;
    cin >> TOTAL_VALUE;

    int RINGGIT = TOTAL_VALUE / 100;
    int CENTS = TOTAL_VALUE % 100;

    cout << "\nThe total values is "<< RINGGIT << " Ringgit Malaysia and "<< CENTS << " cents. "<< endl;
   
}