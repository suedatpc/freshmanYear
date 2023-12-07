#include <iostream>
using namespace std;

int tripleByValue(int count) {
    count *= 3;
    return count;
}

void tripleByReference (int &count) {
    count *= 3;
}

int main() {
    int count;
    cout<<"Enter a value for count: ";
    cin>>count;
    
    int newCount = tripleByValue(count);

    cout<<"Value of count before call to tripleByValue() is: "<<count<<endl;
    cout<<"Value returned from tripleByValue() is: "<< newCount <<endl;
    cout<<"Value of count (in main) after tripleByValue() is: "<<count<<endl;

    cout<<"Value of count before call to tripleByReference() is: "<<count<<endl;
    tripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<count<<endl;
    return 0;
}