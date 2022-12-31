#include <iostream>

using namespace std;

int main() {
    int n, input, otp = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        if(input == 2) {
            otp++;
            continue;
        }

        for (int i2 = 2; i2 < input; i2++) {
            if(input == 1) break;
            
            if(input % i2 == 0) break;

            if(i2 == input - 1) otp++;
        }
    }

    cout << otp << endl;
}
