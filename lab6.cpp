#include <iostream>
using namespace std;

int recursiveMaximum(const int array[],int start, int end){

    if(start==end){
        return array[start];
    }
    
    int mid = (start+end)/2 ;
    int MaxLeft = recursiveMaximum(array,start,mid);
    int MaxRight = recursiveMaximum(array,mid+1,end);
    return (MaxLeft > MaxRight)? MaxLeft:MaxRight ;
}

int main() {
   int size;
   
   cout<<"How many elemets do you want to enter:";
   cin>>size;

   int array[size];

   for(int i = 0; i < size; i++){
    cout<<"Enter "<< i+1 <<". Element: ";
    cin>>array[i];
   }

   int result= recursiveMaximum(array,0,size-1);

    cout<<"The largest element in the array is: "<<result<<endl;
    return 0;
}