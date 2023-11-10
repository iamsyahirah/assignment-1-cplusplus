#include<iostream>
using namespace std;

/*
ANALYZE
=======================
1. PROBLEM: GET THE AMOUNT OF ORANGES RECEIVE BY OWNER AND WORKERS
2. OUTPUT: DISPLAY AMOUNT OF ORANGES, THE BALANCE OF ORANGES, TOTAL AMOUNT OF ORANGES FOR WORKERS 
3. INPUT: AMOUNT THE ORANGES
4. PROCESS: CALCULATE THE AMOUNT OF ORANGES RECEIVE BY OWNER AND WORKERS
=======================
PSEUDOCODE
=======================
1. BEGIN
2. GET THE AMOUNT OF ORANGE
3. CALCULATE THE AMOUNT OF ORANGES RECEIVE BY OWNER AND WORKERS
4. DISPLAY THE TOTAL AMOUNT OF ORANGES,TOTAL AMOUNT OF ORANGES FOR OWNER, THE BALANCE, THE TOTAL AMOUNT OF ORANGES FOR WORKERS
5. END
========================
*/

int main(){

    int AMOUNT_ORANGE;
    
    cout << "\nCALCULATE THE AMOUNT OF ORANGES RECEIVE BY OWNER AND WORKERS" << endl;
    cout << "=====================================" << endl;

    cout << "\nEnter amount of oranges\t\t\t = ";
    cin >> AMOUNT_ORANGE;
    
    cout << "Total amount of oranges entered\t\t = " << AMOUNT_ORANGE<<endl;

    int TOTAL_ORANGE_OWNER = AMOUNT_ORANGE * 0.4;
    int BALANCE_ORANGE = AMOUNT_ORANGE - TOTAL_ORANGE_OWNER;
    int TOTAL_ORANGE_WORKER = BALANCE_ORANGE / 4;

    cout << "Total amount of oranges for owner (40%)\t = ";
    cout<< TOTAL_ORANGE_OWNER<<endl;

    cout << "Balance of oranges\t\t\t = ";
    cout << BALANCE_ORANGE<<endl;

    cout << "Total amount of oranges for each worker\t = ";
    cout << TOTAL_ORANGE_WORKER<<endl;
}