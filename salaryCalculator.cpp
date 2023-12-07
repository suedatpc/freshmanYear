#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours,salary,hourlyRate ;


    cout<<"Enter hours worked (-1 to quit): " ;
    cin>>hours;

//-1 değilse
    while (hours != -1) {
        cout<<"Enter hourly rate of the employee: " ;
        cin>>hourlyRate;

//40 saat veya daha az çalışırsan 
       if(hours <= 40) {
        salary = hourlyRate * hours ;
       } else //extra mesai ücreti dahil olunca
       {
        salary = hourlyRate * 40 +(hours - 40) * hourlyRate * 1.5 ;
       }

       cout<<setprecision(2)<<fixed ;
       cout<<"Salary is: " << salary << endl;

       cout<<"Enter hours worked (-1 to quit): " ;
       cin>> hours ;
    }
    return 0;
}
