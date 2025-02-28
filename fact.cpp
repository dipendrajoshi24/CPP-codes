#include <iostream>
using namespace std;

int main() {
    int n, i;
    long long fact = 1;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " = " << fact << endl;
    return 0;
}
