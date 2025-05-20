#include <bits/stdc++.h>
using namespace std;

void printBinary(int n) {
    // Print binary representation of a 32-bit signed integer
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        cout << bit;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary representation of " << n << " is: ";
    printBinary(n);

    return 0;
}
