#include <iostream>

const int SIZE = 10;

int main() {
    using namespace std;

    //a
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //b
    int* vPtr;

    //c
    cout << "c"<<endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << values[i] << " ";
    }

    cout << endl;

    //d
    vPtr = values; 

    //e
    cout << "e" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << *(vPtr + i) << " ";
    }

    cout << endl;

    //f
    cout << "f" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << *(values + i) << " ";
    }

    cout << endl;

    //g
    cout << "g" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << vPtr[i] << " ";
    }

    cout << endl;

    //h
    int tenthElementArray = values[9];

    // Pointer/offset notation with the built-in array name's as the pointer
    int tenthElementPtrOffset = *(values + 9);

    // Pointer subscript notation
    int tenthElementPtrSubscript = vPtr[9];

    // Pointer/offset notation
    int tenthElementPtrOffsetNotation = *(vPtr + 9);

    cout << "h" << endl;
    cout << *(values+9) << " "
    << values[9] << " " << values[9] << " " << *(values+9) << endl;

    //i
    cout << "i" << endl;
    int* addressVPtrPlus8 = vPtr + 8;
    int valueVPtrPlus8 = *addressVPtrPlus8;
    cout << "Address: " << addressVPtrPlus8 << endl;
    cout << "Value at that location: " << valueVPtrPlus8 << endl;

    //j
    vPtr = &values[9];
    vPtr -= 9;
    int* addressVPtrMinus9 = vPtr;
    int valueVPtrMinus9 = *addressVPtrMinus9;

    cout << "]" << endl;
    cout << "Address: " << addressVPtrMinus9 << endl;
    cout << "Value at that location: " << valueVPtrMinus9 << endl;

    vPtr = &values[0];
    vPtr += 3;
    int* addressVPtrPlus3 = vPtr;
    int valueVPtrPlus3 = *addressVPtrPlus3;

    return 0;
}
