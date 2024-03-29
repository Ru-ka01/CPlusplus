#include <iostream>

using namespace std;

class Person{
    public:
        int age;
        int height;
        int weight;
        char gender;
        string nationality;
        string name;
        int CalculateBmi(int height, int weight);
        Person(){
            cout<<"enter your name: ";
            cin>>name;
            cout<<"enter your age: ";
            cin>>age;
            cout<<"enter your gender as => (F/M): ";
            cin>>gender;
            cout<<"enter weight (kg) ";
            cin>>weight;
            cout<<"enter height (cm)";
            cin>>height;
            cout<<"enter nationality ";
            cin>>nationality;
            cout<<"ok your done";
        }

    
    // this is a constructor it is called when an object is created
    
};


int main (){
    Person personOne;
    
    return 0;
}