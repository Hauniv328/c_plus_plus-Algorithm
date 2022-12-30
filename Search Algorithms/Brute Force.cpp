#include <iostream>

using namespace std;

int main() {
    int arr[10] = {1, 7, 6, 4, 8, 14, 23, 2, 11, 25};
    int target;

    cout << "What number you want? (1~100): ";
    cin >> target;

    for (int i = 0; i < 10; i++) {
        if(arr[i] == target) {
            cout << "This number is located in: " << i << endl;
            target = 0;
            break;
        }
    }

    if(target) {
        cout << "That number is cannot founded." << endl;
    }
}
