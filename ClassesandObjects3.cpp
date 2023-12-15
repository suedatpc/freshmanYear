//INHERITANCE
#include <iostream>
using namespace std;

class Chef{
    public:
    void makeChicken(){
        cout<<"The chef makes chicken.."<<endl;
    }
    void makeSalad(){
        cout<<"The chef makes salad.."<<endl;
    }
    void makeSpecialDish(){
        cout<<"The chef makes bbq ribs.."<<endl;
    }
};

class ItalianChef:public Chef{
    public:
    void makePasta(){
        cout<<"The chef makes pasta.."<<endl;
    }
    void makeChicken(){
        cout<<"The chef makes chicken parm.."<<endl;
    }
};

int main(){

    Chef chef1;
    chef1.makeChicken();
    chef1.makeSpecialDish();

    ItalianChef italianChef1;
    italianChef1.makePasta();
    italianChef1.makeChicken();
    italianChef1.makeSalad();

    return 0;
}