#include"Time.h"
#include<iostream>
using namespace std;

Time::Time():MillTime(0,0,0){}
Time::Time(int s, int m, int h):MillTime(s, m, h){}

void Time::chuyenTime()const{
    if(hou > 12){
        cout << hou - 12 << " h " << mun << " m " << sec << "s .PM" << endl;
    }
    else{
        cout << hou << " h " << mun << " m " << sec << "s .AM" << endl;
    }
}
