#include<iostream>
using namespace std;
class Song{
    private:
    int id;
    string lyrics;
    double duration;
    string singerName;

    public:
    // constructor 
    Song(int id,string lyrics, double duration ,string singerName){
        this->id=id;
        this ->lyrics=lyrics;
        this ->duration=duration;
        this ->singerName=singerName;
    }
    //getters and setters

};