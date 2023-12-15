//using "private"
#include <iostream>
using namespace std;

class Movie{
    private:
    string rating;

    public:
    string title;
    string director;

    Movie(string aTitle , string aDirector , string aRating){
        title = aTitle;
        director = aDirector;
        //we can not use rating = aRating cuz it's private!
        setRating(aRating);
    }

    void setRating(string aRating){
        if(aRating=="G" || aRating=="PG" || aRating=="PG-13" || aRating=="R"){
            rating = aRating;
        }else{
            rating = "NR (no rating)";
        }
    }

    string getRating(){ //we cannot use cout for rating cuz it's private 
        return rating;
    }
};


int main(){
    Movie avengers("The avengers" , "Joss Whedon" , "PG-13");
    
    avengers.setRating("not bad lol");

    cout<<avengers.title<<endl;
    cout<<avengers.director<<endl;
    cout<<avengers.getRating();

    return 0;
}