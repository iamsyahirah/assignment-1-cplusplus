/*
ANALYZE
===========================
1. PROBLEM : GET THE VALUE OF INTEREST
2. OUTPUT : DISPLAY THE VALUE OF INTEREST
3. INPUT: P = PRINCIPAL, T = TIME, R = RATE
4. PROCESS: CALCULATE THE INTEREST USING THE FORMULA I = ( P * T * R ) / 100
===========================
PSEUDOCODE
===========================
1. BEGIN
2. SET THE FORMULA OF INTEREST TO I = ( P * T * R ) / 100
3. GET THE VALUE OF P = PRINCIPAL, T = TIME, R = RATE
4. CALCULATE THE VALUE OF I. FORMULA OF I = ( P * T * R ) / 100
5. DISPLAY THE VALUE OF INTEREST
6. END
============================
ADD INSTALLMENT PER MONTH
(I + P)/(T * 12)
Installment = (I + P)/(T * 12)
============================
*/

#include<iostream>
using namespace std;

int main(){

    double P, T, R;
    // P = PRINCIPLE
    // T = TIME
    // R = RATE

    cout << "\nCALCULATE THE INTEREST "<<endl;
    cout << "========================" << endl;

    cout << "Please enter the value of PRINCIPLE in amount" << endl;
    cin >> P;
    cout << "Please enter the value of TIME in years " << endl;
    cin >> T;
    cout << "Please enter the value of RATE in percentage " << endl;
    cin >> R;
    
    double INTEREST = (P * T * R) / 100;
     // I = INTEREST

    cout << "\nThe value of interest for the amount RM" << P << " for " << T << " years "
         << "and rate in " << R <<" % "<<"is: RM"<< INTEREST << endl;

    cout << "\nThe value of interest is: RM"<< INTEREST << endl;

    float INSTALLMENT_PER_MONTH = (INTEREST + P) / (T * 12);

    cout << "\nThe installment per month is: RM"<<INSTALLMENT_PER_MONTH << endl;
}