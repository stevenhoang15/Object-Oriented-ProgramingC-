#include"Car.h"

Car::Car():modelYear(0),make(""), speed(0){}
Car::Car(int modelYear, string make):modelYear(modelYear), make(make), speed(0){}

void Car::setYearModel(int modelYear){
    this->modelYear = modelYear;
}
int Car::getYearModel()const{
    return modelYear;
}
void Car::setMake(string make){
    this->make = make;
}
string Car::getMake()const{
    return make;
}
void Car::setSpeed(int){
    this->speed = speed;
}
int Car::getSpeed()const{
    return speed;
}
int  Car::accelerate(){
    int s = getSpeed();
    s += 5;
    return s;
}
int Car::brake(){
    int s = getSpeed();
    s-= 5;
    return s;
}
