#include <iostream>

using namespace std;


// Encapsulation involves hiding data from users of the class this means that the internal state of the class is unknown to the users o the calls
class Car{
        private:
            int speed;
        public:
            Car():speed(0){};
            void accerelate (){
                speed+=5;
            }
            void brake(){
                if (speed>0)
                {
                    speed-=2;
                }
                
            }
            // const means a constant member of the class and promises not 
            // to modify the state of the object;
            int getSpeed() const{
                return speed;
            }
    };

int main(){

    

    Car carOne;
    carOne.accerelate();
    cout<<"your current speed is "<<carOne.getSpeed()<<" kmh"<<endl;

    carOne.brake();
    cout<<"you have now braked the car your speed is "<<carOne.getSpeed()<<" kmh";

    return 0;
}