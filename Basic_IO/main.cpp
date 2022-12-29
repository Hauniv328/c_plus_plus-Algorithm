#include <iostream>

using namespace std;

int main() {
    int input;

    cin >> input;

    for (int i = 1; i <= input; i++) {
        for (int i2 = 0; i2 < i; i2++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}