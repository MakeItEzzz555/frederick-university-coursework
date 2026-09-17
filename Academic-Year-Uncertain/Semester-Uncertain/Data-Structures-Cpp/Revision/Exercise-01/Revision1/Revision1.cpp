
#include <iostream>

using namespace std;
    
int Product(int a, int b) {
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter Number 1 --> ";
    cin >> a;
    cout << "\nEnter Number 2 --> ";
    cin >> b;

    cout << "\nProduct of the 2 numbers --> " << Product(a, b);
    return 0;
}

