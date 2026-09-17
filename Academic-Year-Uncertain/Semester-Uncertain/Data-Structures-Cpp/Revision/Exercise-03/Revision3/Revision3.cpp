
#include <iostream>

using namespace std;

void Swap(int a, int b) {
    int  tmp;

    tmp = a;
    a = b;
    b = tmp;

    cout << "\n\nNumbers After Swap --> Num1 :" << a << "\tNum2 :" << b;

}
int main()
{
    int num2, num1;
    
    cout << "Enter Number 1 -->";
    cin >> num1;
    cout << "\nEnter Number 2 -->";
    cin >> num2;

    cout << "\nNumbers Before Swap --> Num1 :"<<num1<<"\tNum2 :"<<num2;
    Swap(num1, num2);
    return 0;

}


