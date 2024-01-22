#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

template <typename T>
T maxNum(T num1 , T num2)
{
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int myArray[] = {1,2,3,4,5,6};
    double urArray[] = {1.1,2.2,3.3,4.4};

    int maxMynum = myArray[0];
    double maxUrnum = urArray[0];

    for(int i = 0; i < (sizeof(myArray) & sizeof(urArray)); i++)
    {
        maxMynum = maxNum(maxMynum , myArray[i]);
        maxUrnum = maxNum(maxUrnum , urArray[i]);
    }

    cout<<"Max my number is: "<<maxMynum;
    cout<<"\nMax ur number is: "<<maxUrnum;


}