#include <iostream>
using namespace std;


 struct car
    {
        string model;
        string brand;
        string engine;
        bool isused;
        int year;
    };
   


int main (){
    
    car car_one;
    car_one.brand="toyota";
    car_one.engine="v8";
    car_one.isused=true;
    car_one.year=2020;
    car_one.model="vanguard";
    
    car car_two;
    car_two.model="urus";
    car_two.brand="lamborgini";
    car_two.engine="R42";
    car_two.year=2020;
    car_two.isused=false;
    

    cout<< car_one.brand<<' '<<car_one.model<<' '<<car_one.year<<' '<<car_one.engine<<endl;
    cout<< car_two.brand<<' '<<car_two.model<<' '<<car_two.year<<' '<<car_two.engine<<endl;
    

    return 0;
}





