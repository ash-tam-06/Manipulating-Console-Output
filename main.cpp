//
// Created by Asmita Tamang on 2/1/25.
//

#include <iostream>
#include <iomanip>


using namespace std;
int main() {


    int ID1 = 112341;
    int ID2 = 183682;
    int ID3 = 192733;

    string name1 = "Alice";
    string name2 = "John";
    string name3 = "Stephan";

    float balance1 = 100.2;
    float balance2 = 23.87;
    float balance3 = 10000.11;

    cout << left << setw(10) << "ID Num" << setw(12) << "Name" << "Balance" << endl;
    cout << setw(10) << "____" << setw(12) << "______" << setw(8) << "______" << endl;
    cout << setw(10) << ID1 << setw(12) << name1 <<balance1 <<endl;
    cout << setw(10) << ID2 << setw(12) << name2 <<balance2 <<endl;
    cout << setw(10) << ID3 << setw(12) << name3 <<balance3 <<endl;



    return 0;
}
