#include <iostream>
using namespace std;



class car {
    public:
    string model;
    int year;
    void drive(){
        cout<<"ready to drive";
    }
    void park();
    int maxSpeed(int speed);
 };

void car::park(){
    cout<<"car is parked";
}


int car::maxSpeed(int speed){
    return speed;
}

int main(){
 car carOne;
 carOne.model="g7";
 carOne.year=2022;
 carOne.drive();
 carOne.park();
 cout<<" speed limit is " <<carOne.maxSpeed(150);


    return 0;
}