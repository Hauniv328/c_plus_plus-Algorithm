#include <iostream>

using namespace std;

int main() {
    int arr[10] = {5, 7, 9, 16, 20, 23, 32, 35, 39, 47};

    int target, low = 0, mid, max = 10;
    cin >> target;

    while (true) {
        mid = (max + low) / 2;

        if(target == arr[mid]) {
            cout << "YES" << endl;
            break;
        }
        if(low == mid || max == mid) {
            cout << "NO" << endl;
            break;
        }

        if(target > arr[mid]) {
            low = mid;
        }

        else if(target < arr[mid]) {
            max = mid;
        }
    }

    return 0;
}
