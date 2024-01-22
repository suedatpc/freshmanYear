#include <iostream>

using namespace std;

void findGreatestAndSmallest(int *num1, int *num2, int *num3, int *max, int *min) 
{
    if (*num1 > *num2 && *num1 > *num3) {
        *max = *num1;
    } else if (*num2 > *num3) {
        *max = *num2;
    } else {
        *max = *num3;
    }

    if (*num1 < *num2 && *num1 < *num3) {
        *min = *num1;
    } else if (*num2 < *num3) {
        *min = *num2;
    } else {
        *min = *num3;
    }
}


int main() {
    int num1, num2, num3;
    int greatest, smallest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find greatest and smallest using pointers!
    findGreatestAndSmallest(&num1, &num2, &num3, &greatest, &smallest);

    cout << "The greatest number is: " << greatest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}