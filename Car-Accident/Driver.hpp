#include <iostream>
using namespace std;

class Driver {
    
public:
    

    void setAge(int x);

    int getAge();

    void setMileage(int x);

    int getmileage();

    double determineGroup(int age);

    double calculateRisk(double groupRisk, int Mileage);

protected:
    double GroupOne = .00002162;
    double GroupTwo = .00001098;
    double GroupThree = .00000328;
    double GroupFour = .00000314;
    double GroupFive = .00000315;
    double GroupSix = .00000241;
    double GroupSeven = .00000301;
    double GroupEight = .00000432;
private:
    int age;
    int mileage;
    
};