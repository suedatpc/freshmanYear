#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int number = 5;
    unsigned int factorial = 1;

    cout << "Number" << setw(30) << "Fact of the number" << endl;

    for (unsigned int i = 1; i <= number; i++) {
        factorial *= i;
        cout << setw(6) << i << setw(20) << factorial << endl;
    }

    return 0;
}
