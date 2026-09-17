
#include <iostream>

using namespace std;

const int SIZE = 10;

void Reverse(int arr[]) {

    int tmp, i;

    for (i = 0; i < SIZE/2; i++) {

        tmp = arr[i];
        arr[i] = arr[SIZE - i -1];
        arr[SIZE - i -1] = tmp;
        
    }

    cout << "Reversed List of Numbers -->";

    for (int k = 0; k < SIZE; k++) {

        cout << arr[k];

    }

    cout << endl;
    
}
int main()
{
    int List[SIZE] = {2,4,6,8,10,12,14,16,18,20};
    
    Reverse(List);

    system("pause");

    return 0;
}


