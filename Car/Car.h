#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<iostream>
using namespace std;

class Car{
    private:
        int modelYear;
        string make;
        int speed;
    public:
        Car();
        Car(int, string);
        void setYearModel(int);
        int getYearModel()const;
        void setMake(string);
        string getMake()const;
        void setSpeed(int);
        int getSpeed()const;

        int  accelerate();
        int brake();
};


#endif // CAR_H_INCLUDED
