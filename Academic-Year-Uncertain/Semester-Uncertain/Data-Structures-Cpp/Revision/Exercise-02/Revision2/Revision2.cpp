

#include <iostream>

using namespace std;


void Even(int num) {
    cout << "Number " << num << " Is Even";
}

void Odd(int num) {
    cout << "Number "<< num <<" Is Odd";
}

void Check(int num) {
    int rem;
    rem = num % 2;

    if (rem == 0) Even(num);

    else Odd(num);
}

int main()
{
    int num;

    cout << "Enter a number --> ";
    cin >> num;

    Check(num);

    return 0;
}


