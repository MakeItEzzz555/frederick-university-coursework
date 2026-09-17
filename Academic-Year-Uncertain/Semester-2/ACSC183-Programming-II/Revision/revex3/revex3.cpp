#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("data.txt"); // Assuming data is stored in "data.dat"
    if (!inputFile) {
        cout << "Error: Unable to open file data.txt" << endl;
        return 1;
    }

    double sum = 0.0;  
    double minValue;
    double maxValue;
    double value;
    int count = 0;

    while (inputFile >> value) {
        sum += value;
        if (count == 0)
        {
            minValue = value;
            maxValue = value;
        }
        else if (value < minValue) {
            minValue = value;
        }
        else if (value > maxValue) {
            maxValue = value;
        }
        count++;
    }

    inputFile.close();

    if (count == 0) {
        cout << "No data found in the file." << endl;
    }
    else {
        double average = sum / count;
        cout << "Average: " << average << endl;
        cout << "Minimum value: " << minValue << endl;
        cout << "Maximum value: " << maxValue << endl;
    }

    return 0;
}
