#include <iostream>
#include "Driver.hpp"

using namespace std;


void Driver::setAge(int x){
    age = x;
}

int Driver::getAge() {
    return age;
}

void Driver::setMileage(int x){
    mileage = x;
}

int Driver::getmileage(){
    return mileage;
}
double Driver::determineGroup(int age){
    if(age >= 16 && age <= 19)
    {
        return (Driver::GroupOne);
    }
    else if (age >= 20 && age <=29)
    {
        return(Driver::GroupTwo);
    }
    else if (age >= 30 && age <=39)
    {
        return(Driver::GroupThree);
    }
    else if (age >= 40 && age <=49)
    {
        return(Driver::GroupFour);
    }
    else if (age >= 50 && age <=59)
    {
        return(Driver::GroupFive);
    }
    else if (age >= 60 && age <=69)
    {
        return(Driver::GroupSix);
    }
    else if (age >= 70 && age <=79)
    {
        return(Driver::GroupSeven);
    }
    else if (age >= 80)
    {
        return(Driver::GroupEight);
    }
    else
    {
        return(0);
    }
}
double Driver::calculateRisk(double groupRisk, int Mileage){
    return (mileage * groupRisk);
}
