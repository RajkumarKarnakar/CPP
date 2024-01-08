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
    Song(){};
    Song(int id,string lyrics, double duration ,string singerName){
        this->id=id;
        this ->lyrics=lyrics;
        this ->duration=duration;
        this ->singerName=singerName;
    }
    //getters and setters
    string getsingerName(){
        return singerName;
    }
    double getDuration(){
        return duration;
    }

};

int main(){
    Song songList[10];
    songList[0]=Song(1,"hello",4.5,"rajkumar");
    songList[1]=Song(2,"hello2",4,"rajkumar");
    songList[2]=Song(3,"hello2",5,"rajkumar");
    songList[3]=Song(4,"hello3",5.5,"rajkumar");
    string singername;
    cout << "Enter singer name :";
    cin>>singername;
    int totalduration =0;
    for (int i =0; i<10;i++){
        if(songList[i].getsingerName()==singername){
            totalduration+=songList[i].getDuration();
        }
    }
 cout<<"songs duaration by "<<singername<<" is: "<<totalduration;
 return 0;
}

