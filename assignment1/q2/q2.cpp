#include<iostream>
using namespace std;

/*
ANALYZE
=========================
1. PROBLEM: GET THE VALUE OF VELOCITY
2. OUTPUT: DISPLAY THE VALUE OF VELOCITY
3. INPUT: P1 = PLACE 1 , P2 = PLACE 2, TIME1 = TIME 1, TIME2 = TIME 2
4. PROCESS: CALCULATE THE VALUE OF VELOCITY USING THE FORMULA V = (P1-P2)/(T1-T2)
=========================
PSEUDOCODE
=========================
1. BEGIN
2. SET THE FORMULA OF VELOCITY IS V = (P1-P2)/(T1-T2)
3. INPUT: GET THE VALUE OF P1 = PLACE 1 , P2 = PLACE 2, TIME1 = TIME 1, TIME2 = TIME 2
4. CALCULATE THE VALUE OF VELOCITY, V. USING THE FORMULA V = (P1-P2)/(T1-T2)
5. DISPLAY THE VALUE OF VELOCITY, V
6. END
=========================
*/

#include<iostream>
using namespace std;

int main(){

    double p1, p2, t1, t2;

    cout << "\nCALCULATE THE VELOCITY OF DISTANCE PER TIME " << endl;
    cout << "==========================================" << endl;
    cout << "Enter the distance of place,p1 in meter " << endl;
    cin >> p1;
    cout << "Enter the distance of place,p2 in meter" << endl;
    cin >> p2;
    cout << "Enter the time,t1 in second" << endl;
    cin >> t1;
    cout << "Enter the time,t2 in second" << endl;
    cin >> t2;

    int V = (p1 - p2) / (t1 - t2);

    cout << "\nThe value of VELOCITY is: " << V << " meter per second "<<endl;
}
