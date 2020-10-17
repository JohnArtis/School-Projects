/*C++ version of the Car accidnet java program that detects probability of crash
due to age and mileage*/
#include <iostream>
#include "Driver.cpp"
using namespace std;
int age;
int mileage;
string answer;
int main(){
    Driver driverobject;
    do
    {
    cout << "Hello how old are you? \n";
    cin >> age;
    cout << "How far are you driving?\n";
    cin >> mileage;
    driverobject.setMileage(mileage);
    driverobject.setAge(age);
    cout << "Driver age: " << driverobject.getAge() << "\n"
    << "Driver risk: " << driverobject.calculateRisk(driverobject.determineGroup(driverobject.getAge()),driverobject.getmileage()) << endl;
    cout << "Would you like to see a different user? (y/n)";
    cin >> answer;
    }while(answer == "yes" || answer == "y");
    return 0;
}