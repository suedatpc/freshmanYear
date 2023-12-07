#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int passes=0 ;
    unsigned int failures=0 ;
    unsigned int studentCounter=1 ;
//en fazla 10 öğrenci!
    while(studentCounter <= 10) {
        cout<<"Enter result (1=pass , 2=fails): " ;
        int result ;
        cin>>result;
        studentCounter++ ;

        if(result == 1) {
            passes++;
        } else if (result == 2) {
            failures++ ;
        } else {
            cout<<"INVALID GRADE!" <<endl;
        }
    }

    cout<<"Passed: "<<passes<< endl;
    cout<<"Failed: "<<failures<<endl;

    if(passes >= 6) {
        cout<<"BONUS TO THE CLASS!" ;
    } else{
        cout<<"...Study harder..." ;
    }
}