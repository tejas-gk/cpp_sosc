#include<iostream>

using namespace std;
class Driver{
    private:
        int age;
        string name;
    public:
    Driver(){
        cout << "Default constructor called" << endl;
    }
        Driver(int age, string name){
            this->age = age;
            this->name = name;
        }
        void checkAge(){
            if(age < 18){
                cout << name<<"You are not allowed to drive" << endl;
            }else{
                cout << "You are allowed to drive" << endl;
            }
        }

        bool isOverSpeeding(int speed){
            if(speed > 100){
                return true;
            }else{
                return false;
            }
        }
        
};


int main(){
    int a[] = {15};
    int *pointer = a;
    

    return 0;
}