// Files2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{


    int accountNumber, customerId, accountNum, i = 1;
    double currentBalance, euroAmount;

    fstream inOldMaster("oldmast.txt");
    if (!inOldMaster) {
        cerr << "Error opening oldmast.txt for input" << endl;
        return 1;
    }

    fstream inTransaction("trans.txt");
    if (!inTransaction) {
        cerr << "Error opening trans.txt for input" << endl;
        return 1;
    }

    fstream outNewMaster("newmast.txt");
    if (!outNewMaster) {
        cerr << "Error opening newmast.txt for output" << endl;
        return 1;
    }

    while (inOldMaster >> accountNumber >> customerId >> currentBalance) {
        inTransaction >> accountNum >> euroAmount;
        if (accountNumber != accountNum) {
            cerr << "Error: Account numbers in oldmast.txt and trans.txt don't match." << endl;
            return 1;
        }
        i++;
        cout << "Line ["<<i<<"] read successfully!"<<endl;

        outNewMaster << accountNumber << " " << customerId << " " << currentBalance + euroAmount << endl;
    }

    inOldMaster.close();
    inTransaction.close();
    outNewMaster.close();

    return 0;
}


