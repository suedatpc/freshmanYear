#include <iostream>
using namespace std;

int main() {
    int secretNum=6 ;
    int guess;
    int guessCounter=0;
    int guessLimit=3;
    bool outOfGuesses=false;

    cout<<"Your limit is 3 be careful :)" <<endl;

    while(secretNum != guess && !outOfGuesses) {

        if(guessCounter < guessLimit) {
            cout<<"Enter a guess: " ;
            cin>>guess,
            guessCounter++;
        } else {
            outOfGuesses=true;
        }
    }
    
    if(outOfGuesses) {
        cout<<"You Lose!"<<endl;
    } else{
        cout<<"You Win!"<<endl;
    }

}