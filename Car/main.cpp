#include <iostream>
using namespace std;
#include"Car.h"
int main()
{
    Car c1(2022, "Rollroyal");
    cout << "speed:" << c1.accelerate() << "   ";
    cout << "speed:" << c1.accelerate() << "   ";
    cout << endl << endl;
    //for(int i = 0; i <= 5; i++){
        //cout << "speed:" << c1.brake() << "  ";
    //}
    return 0;
}
