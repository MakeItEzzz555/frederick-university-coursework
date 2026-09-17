#include "hashmap.h"

using namespace std;

// Structure for User Node



int main() {
    HashMap hashMap; // Start with 1 bucket
    bool running = true;

    while (running) {
        cout << "\n1. Sign Up\n2. Log In\n3. Display All Users\n4.Exit\nChoose an option: ";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            hashMap.insert(username, password);
            break;
        }
        case 2: {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            if (hashMap.login(username, password)) {
                cout << "Login successful!\n";
            }
            else {
                cout << "Invalid credentials!\n";
            }
            break;
        }
        case 3: {
            hashMap.dispMap();
            break;
        }
        case 4:
            cout << "Goodbye!\n";
            running = false;
            break;
        default: {
            cout << "Invalid option!\n";
            break;
        }
        }
    }

    return 0;
}
