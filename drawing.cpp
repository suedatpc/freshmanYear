#include <iostream>
using namespace std;

int main() {

    for(int i = 0; i<5; i++) {
        int number;
        cout<<"Enter a number between 1 and 30: ";
        cin>>number;

        if(number >= 1 && number <= 30) {
            for(int i=0; i<number ; i++) { //yazılan sayıya eşitlenene kadar * yaz.i=number olana kadar..
                cout<<"*";
            }
            cout<<endl;
        }else{
            cout<<"INVALID NUMBER"<<endl;
        }
    }
    return 0;
}
